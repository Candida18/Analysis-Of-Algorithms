"""
/**********************************************************************************************************
NAME: CANDIDA RUTH NORONHA
CLASS: SE COMPS B
ROLL NO. : 8960
BATCH: C
TITLE: NAIVE STRING MATCHING
SUBMISSION DATE : 9th MAY, 2021
**********************************************************************************************************/
"""


def search(pat, txt):
    M = len(pat)
    N = len(txt)
 
    # A loop to slide pat[] one by one */
    for i in range(N - M + 1):
        j = 0
         
        # For current index i, check
        # for pattern match */
        while(j < M):
            if (txt[i + j] != pat[j]):
                break
            j += 1
 
        if (j == M):
            print(" Pattern found at index : ", i)
 
# Driver Code
if __name__ == '__main__':
    txt = str(input(" Enter the text : "))
    pat = str(input(" Enter the pattern : "))
    print("\n")
    search(pat, txt)

"""
/**********************************************************************************************************

OUTPUT:

Enter the text : AABAACAADAABAAABAA
Enter the pattern : AABA


Pattern found at index :  0
Pattern found at index :  9
Pattern found at index :  13

**********************************************************************************************************/

"""