"""
Utility functions for automatically opening and serializing a python object into
a file using the latest pickling protocol. Can optionally compress the output if
file_name ends with .gz. Also provides functions to read that object back.
"""

from __future__ import division

def _open(file_name, mode):
  """
  Wraps libtbx.smart_open.

  Parameters
  ----------
  file_name : str
  mode : str

  Returns
  -------
  file
  """
  import os
  file_name = os.path.expanduser(file_name)
  from libtbx.str_utils import show_string
  from libtbx import smart_open
  try: return smart_open.file(file_name=file_name, mode=mode)
  except IOError as e:
    raise IOError("Cannot open pickle file %s (%s)" % (
      show_string(file_name), str(e)))

def dump(file_name, obj):
  """
  Wraps cPickle.dump.

  Parameters
  ----------
  file_name : str
  obj : object

  Examples
  --------
  >>> from libtbx.easy_pickle import dump, load
  >>> dump("output.pkl.gz", [1, 2, 3])
  >>> print load("output.pkl.gz")
  [1, 2, 3]
  """
  import cPickle
  return cPickle.dump(obj, _open(file_name, "wb"), cPickle.HIGHEST_PROTOCOL)

def dumps(obj):
  """
  Wraps cPickle.dumps.

  Parameters
  ----------
  obj : object

  Returns
  -------
  str
  """
  import cPickle
  return cPickle.dumps(obj, cPickle.HIGHEST_PROTOCOL)

def load(file_name, faster_but_using_more_memory=True):
  """
  Wraps cPickle.load.

  Parameters
  ----------
  file_name : str
  faster_but_using_more_memory : bool, optional
      Optionally read the entirety of a file into memory before converting it
      into a python object.

  Returns
  -------
  object
  """
  import cPickle
  if (faster_but_using_more_memory):
    return cPickle.loads(_open(file_name, "rb").read())
  return cPickle.load(_open(file_name, "rb"))

def loads(string) :
  """
  Wraps cPickle.loads.

  Parameters
  ----------
  string : str

  Returns
  -------
  object

  Examples
  --------
  >>> from libtbx.easy_pickle import dumps, loads
  >>> print loads(dumps([1, 2, 3])
  [1, 2, 3]
  """
  import cPickle
  return cPickle.loads(string)

def dump_args(*args, **keyword_args):
  """
  Dumps args and keyword_args to args.pickle.
  """
  dump("args.pickle", (args, keyword_args))
