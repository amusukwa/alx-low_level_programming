#!/usr/bin/pyh
def is_crack():
  ok = 'Zen of Python'
  ok = ok + 'C'
  ok = ok[1:3] + ok[3] + ok[14] + ok[3] + ok[7:9] + ok[:6][::-1]

  
  return ok
  if __name__ == "__main__":
    password = is_crack()
    print(password)

