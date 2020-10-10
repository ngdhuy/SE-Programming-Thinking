#
#  Created by NDHuy at 28/04/2020
#  Copyright 2020 by SEstudio
#  15CTT31-BaiTapLyThuyet-04.pdf: Bai 2
#  

from lib import number

def main():
    n = number.enterN()
    number.PrintPrimeLessThanN(n)
    number.PrintDevisorPrimeOfN(n)
    number.PrintNumberOfN(n)
    number.PrintRevertNumberOfN(n)
    number.Print_N_FirstNumberPerfectSquare(n)

    
if __name__ == "__main__":
    main()