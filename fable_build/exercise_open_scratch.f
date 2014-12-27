      program prog
      open(1, file='exercise_open.tmp', status='scratch', iostat=ios)
      write(6, '(l1)') (ios .eq. 0)
      end
