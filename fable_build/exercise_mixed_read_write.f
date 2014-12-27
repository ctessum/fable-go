      program prog
      open(
     &  unit=1,
     &  file='exercise_mixed_read_write.tmp',
     &  status='old')
      read(1, '(i2)') num
      write(6, '(i2)') num*2
      write(1, '(i2)') 78
      end
