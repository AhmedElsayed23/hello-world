
import sys
i=0

board=[0,1,2,3,4,5,6,7,8,9,10]

def show():
    print(board[1],"|",board[2],"|",board[3])
    print('__|___|__')
    print(board[4],"|",board[5],"|",board[6])
    print('__|___|__')
    print(board[7],"|",board[8],"|",board[9])


        
def checkline(char,position1,position2,position3):
    if board[position1] == char and board[position2] == char and board[position3] == char:
        return True

def winCheck(char):
    if checkline(char,1,2,3):
        return True
    if checkline(char,4,5,6):
        return True    
    if checkline(char,7,8,9):
        return True
    if checkline(char,3,6,9):
        return True
    if checkline(char,2,5,8):
        return True
    if checkline(char,1,4,7):
        return True
    if checkline(char,1,5,9):
        return True
    if checkline(char,3,5,7):
        return True
show () 
j=int(input("for player X enter 1 for player O enter any digit :"))
if j==1:
  print("START GAME")  
  while True:
          A = int(input("Select a Position(X): "))
          i+=1
          if A>9 or A<0:
               print("Error Position is not Found")
          else:    

               if board[A] !="X" and board[A] !="O" :
                   board[A] = "X"

                   if winCheck("X") == True:
                       print("GAME OVER ")
                       print("the player X is wins ")
                       show()
                       break;
                   if i==9 :
                      print("draw")
                      show()
                      print("END GAME")
                      break;
                   show()
                   while True:
                      B = int(input("Select a Position(O) : "))
                      i+=1 
                      if B>9 or B<0:
                           print("Error Position is not Found")
                      else:    

                          if board[B] !="O" and board[B] !="X" :
                              board[B] = "O"

                              if winCheck("O") == True:
                                 print("GAME OVER ")
                                 print("the player O is wins ")
                                 show()
                                 sys.exit()
                                 break;
                              show()
                              break;
                          else:
                              print("this position is taken")
               else:
                   print("this position is taken")
                   
else:
    print("START GAME")
    while True:
          A = int(input("Select a Position(O): "))
          i+=1
          if A>9 or A<0:
               print("Error Position is not Found")
          else:    

               if board[A] !="O" and board[A] !="X" :
                   board[A] = "O"

                   if winCheck("O") == True:
                       print("GAME OVER ")
                       print("the player O is wins ")
                       show()
                       break;
                   if i==9 :
                      print("draw")
                      show()
                      print("END GAME")
                      break;
                   show()
                   while True:
                      B = int(input("Select a Position(X) : "))
                      i+=1 
                      if B>9 or B<0:
                           print("Error Position is not Found")
                      else:    

                          if board[B] !="X" and board[B] !="O" :
                              board[B] = "X"

                              if winCheck("X") == True:
                                 print("GAME OVER ")
                                 print("the player X is wins ")
                                 show()
                                 sys.exit()
                                 break;
                              show()
                              break;
                          else:
                              print("this position is taken")
               else:
                   print("this position is taken")
