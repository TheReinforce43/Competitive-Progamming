
def Soluiton():
    N=int(input())
    ans=0
    for pw in  range(1,N+1):
        for d in range(1,10):
            if(pw*d <=N):
                ans+=1
        pw= pw*10
    return ans



def main():
    
    test=int(input())
    for _ in range(test):
        print(Soluiton())
    
    
    
    
    
if __name__=="__main__":
    main()