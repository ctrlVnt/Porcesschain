#include "process_chain.h"

/***********************/
/***COMPILED***TIME*****/
/***********************/
int SO_BLOCK_SIZE = 6;
int SO_TP_SIZE = 10;
/***********************/
/*sim1
int SO_BLOCK_SIZE = 100;
int SO_TP_SIZE = 1000;*/

/*sim2
int SO_BLOCK_SIZE = 10;
int SO_TP_SIZE = 20;*/

/*sim3
int SO_BLOCK_SIZE = 10;
int SO_TP_SIZE = 100;*/

int getSoBlockSize()
{
    return SO_BLOCK_SIZE;
}

int getTpSize()
{
    return SO_TP_SIZE;
}

#ifdef runtime_mem_alloc
void setTpSize(int s)
{
    if (s <= 0)
    {
        fprintf(stderr, "%s", "SO_TP_SIZE must be at least 1!\n");
        exit(EXIT_FAILURE);
    }
    SO_TP_SIZE = s;
}

void setSoBlockSize(int s)
{
    if (s <= 0)
    {
        fprintf(stderr, "%s", "SO_BLOCK_SIZE must be at least 1!\n");
        exit(EXIT_FAILURE);
    }
    SO_BLOCK_SIZE = s;
}
#endif

/*Numero totale di utenti-partecipanti della simulazione*/
int SO_USERS_NUM = -1;

int getSoUsersNum()
{
    if (SO_USERS_NUM > 0)
    {
        return SO_USERS_NUM;
    }

    fprintf(stderr, "%s", "getSoUsersNum(): SO_USERS_NUM must be at least 2!\n");
    exit(EXIT_FAILURE);

    return 0;
}

void setSoUsersNum(int u)
{
    if (u <= 0)
    {
        fprintf(stderr, "%s", "setSoUsersNum(int u) SO_USERS_NUM must be at least 1!\n");
        exit(EXIT_FAILURE);
    }
    SO_USERS_NUM = u;
    return;
}

int SO_NODES_NUM = -1;

int getSoNodesNum()
{
    if (SO_NODES_NUM > 0)
    {
        return SO_NODES_NUM;
    }

    fprintf(stderr, "%s", "getSoNodesNum(): SO_NODES_NUM must be at least 2!\n");
    exit(EXIT_FAILURE);

    return 0;
}

void setSoNodesNum(int n)
{
    if (n <= 0)
    {
        fprintf(stderr, "%s", "setSoNodesNum(int u) SO_NODES_NUM must be at least 1!\n");
        exit(EXIT_FAILURE);
    }
    SO_NODES_NUM = n;
    return;
}

int SO_REWARD = -1;

int getSoReward()
{
    if (SO_REWARD > 0)
    {
        return SO_REWARD;
    }

    fprintf(stderr, "%s", "getSoReward(): SO_REWARD must be at least 1!\n");
    exit(EXIT_FAILURE);

    return 0;
}

void setSoReward(int r)
{
    if (r < 1)
    {
        fprintf(stderr, "%s", "setSoReward(int r) SO_REWARD must be at least 1!\n");
        exit(EXIT_FAILURE);
    } 
    SO_REWARD = r;
    return;
}

long SO_MIN_TRANS_GEN_NSEC = -1;

long getSoMinTransGenNsec()
{
    if (SO_MIN_TRANS_GEN_NSEC > 0)
    {
        return SO_MIN_TRANS_GEN_NSEC;
    }

    fprintf(stderr, "%s", "getSoMinTransGenNsec(): SO_MIN_TRANS_GEN_NSEC must be at least 1!\n");
    exit(EXIT_FAILURE);

    return 0;
}

void setSoMinTransGenNsec(long ns)
{
    if (ns < 1)
    {
        fprintf(stderr, "%s", "setSoMinTransGenNsec(long r) SO_MIN_TRANS_GEN_NSEC must be at least 1!\n");
        exit(EXIT_FAILURE);
    } 
    SO_MIN_TRANS_GEN_NSEC = ns;
    return;
}

long SO_MAX_TRANS_GEN_NSEC = -1;

long getSoMaxTransGenNsec()
{
    if (SO_MAX_TRANS_GEN_NSEC > 0)
    {
        return SO_MAX_TRANS_GEN_NSEC;
    }

    fprintf(stderr, "%s", "getSoMaxTransGenNsec(): SO_MAX_TRANS_GEN_NSEC must be at least 2!\n");
    exit(EXIT_FAILURE);

    return 0;
}

void setSoMaxTransGenNsec(long ns)
{
    if (ns < 2)
    {
        fprintf(stderr, "%s", "setSoMaxTransGenNsec(long r) SO_MAX_TRANS_GEN_NSEC must be at least 2!\n");
        exit(EXIT_FAILURE);
    } 
    SO_MAX_TRANS_GEN_NSEC = ns;
    return;
}

int SO_RETRY = -1;

int getSoRetry()
{
    return SO_RETRY;

    if (SO_RETRY >= 1)
    {
        return SO_RETRY;
    }

    fprintf(stderr, "%s", "getSoRetry(): SO_RETRY must be at least 1!\n");
    exit(EXIT_FAILURE);

    return 0;
}

void setSoRetry(int r)
{
    SO_RETRY = r;
    return;
}

long SO_MIN_TRANS_PROC_NSEC = -1;

long getSoMinTransProcNsec()
{
        return SO_MIN_TRANS_PROC_NSEC;
}

void setSoMinTransProcNsec(long ns)
{
    SO_MIN_TRANS_PROC_NSEC = ns;
    return;
}

long SO_MAX_TRANS_PROC_NSEC = -1;

long getSoMaxTransProcNsec()
{
        return SO_MAX_TRANS_PROC_NSEC;
}

void setSoMaxTransProcNsec(long ns)
{
    SO_MAX_TRANS_PROC_NSEC = ns;
    return;
}

int SO_REGISTRY_SIZE = -1;

int getSoRegistrySize()
{
    if (SO_REGISTRY_SIZE > 0)
    {
        return SO_REGISTRY_SIZE;
    }

    fprintf(stderr, "%s", "getSoRegistrySize(): SO_REGISTRY_SIZE must be at least 1!\n");
    exit(EXIT_FAILURE);

    return 0;
}

void setSoRegistrySize(int r)
{
    if (r < 1)
    {
        fprintf(stderr, "%s", "setSoRegistrySize(int r) SO_REGISTRY_SIZE must be at least 1!\n");
        exit(EXIT_FAILURE);
    } 
    SO_REGISTRY_SIZE = r;
    return;
}

int SO_BUDGET_INIT = -1;

int getSoBudgetInit()
{
    if (SO_BUDGET_INIT >= 0)
    {
        return SO_BUDGET_INIT;
    }

    fprintf(stderr, "%s", "getSoBudgetInit(): SO_BUDGET_INIT must be at least 2!\n");
    exit(EXIT_FAILURE);

    return 0;
}

void setSoBudgetInit(int b)
{
    if (b < 2)
    {
        fprintf(stderr, "%s", "setSoBudgetInit(int r) SO_BUDGET_INIT must be at least 2!\n");
        exit(EXIT_FAILURE);
    } 
    SO_BUDGET_INIT = b;
    return;
}

int SO_SIM_SEC = -1;

int getSoSimSec()
{
    if (SO_SIM_SEC > 0)
    {
        return SO_SIM_SEC;
    }

    fprintf(stderr, "%s", "getSoSimSec(): SO_SIM_SEC must be at least 2!\n");
    exit(EXIT_FAILURE);

    return 0;
}

void setSoSimSec(int s)
{
    if (s < 1)
    {
        fprintf(stderr, "%s", "setSoSimSec(int r) SO_SIM_SEC must be at least 1!\n");
        exit(EXIT_FAILURE);
    } 
    SO_SIM_SEC = s;
    return;
}

int SO_FRIENDS_NUM = -1;

int getSoFriendsNum()
{
    if (SO_FRIENDS_NUM > 0)
    {
        return SO_FRIENDS_NUM;
    }

    fprintf(stderr, "%s", "getSoFriendsNum(): SO_FRIENDS_NUM must be at least 1!\n");
    exit(EXIT_FAILURE);

    return 0;
}

void setSoFriendsNum(int n)
{
    if (n < 1)
    {
        fprintf(stderr, "%s", "setSoFriendsNum(int n) SO_FRIENDS_NUM must be at least 1!\n");
        exit(EXIT_FAILURE);
    } 
    SO_FRIENDS_NUM = n;
    return;
}

int SO_HOPS = -1;

int getSoHops()
{
    if (SO_HOPS >= 0)
    {
        return SO_HOPS;
    }

    fprintf(stderr, "%s", "getSoHops(): SO_HOPS must be at least 1!\n");
    exit(EXIT_FAILURE);

    return 0;
}

void setSoHops(int n)
{
    SO_HOPS = n;
    return;
}

long parseLongFromParameters(char const *argv[], int pos)
{
    long l;
    char *endptr;
    l = strtol(argv[pos], &endptr, 10);
    if(l == 0 && errno == EINVAL)
    {
        perror("Errore di conversione");
        exit(EXIT_FAILURE);
    }
    else if((l == LONG_MIN || l == LONG_MAX) && errno == ERANGE)
    {
        perror("Errore ERANGE");
        exit(EXIT_FAILURE);
    }

    return l;
}

int parseIntFromParameters(char const *argv[], int pos)
{
    int i;
    char *endptr;
    i = (int)strtol(argv[pos], &endptr, 10);
    if(i == 0 && errno == EINVAL)
    {
        perror("Errore di conversione");
        exit(EXIT_FAILURE);
    }

    return i;
}

int semReserve(int semId, int semOp, int semNum, short flag)
{
    struct sembuf sops;
    sops.sem_flg = flag;
    sops.sem_num = semNum;
    sops.sem_op = semOp;

    return semop(semId, &sops, 1);
}

int semRelease(int semId, int semOp, int semNum, short flag)
{
    struct sembuf sops;
    sops.sem_flg = flag;
    sops.sem_num = semNum;
    sops.sem_op = semOp;

    return semop(semId, &sops, 1);
}

/*completare con le info*/
int eseguiDetachShm(const void *ptr, char s[])
{
    if (shmdt(ptr) == -1)
    {
        perror(s);
    }

    return 0;
}

int eseguiDeallocamentoShm(int idShm, char s[])
{
    if(shmctl(idShm, IPC_RMID, NULL) == -1)
    {
        perror(s);
    }

    return 0;
}

int eseguiDeallocamentoSemaforo(int idSem, int nSem, char s[])
{
    int r = 0;
    if(semctl(idSem, nSem, IPC_RMID) == -1)
    {
        perror(s);
    }
    return 0;
}

int eseguiDeallocamentoCodaMessaggi(int idMq, char s[])
{
    if(msgctl(idMq, IPC_RMID, NULL) == -1)
    {
        perror(s);
    }
    return 0;
}

int impostaHandlerSaNoMask(struct sigaction *saNew, struct sigaction *saOld, int sigNum, void (*handler)(int))
{
    saNew->sa_flags = 0;
    saNew->sa_handler = handler;
    sigemptyset(&saNew->sa_mask);
    return sigaction(sigNum, saNew, saOld);
}

int impostaHandlerSaWithMask(struct sigaction *saNew, sigset_t *maskSet, struct sigaction *saOld, int sigNum, void (*handler)(int), int numMasks, ...)
{
    int masksCount;
    va_list valist;
    saNew->sa_flags = 0;
    saNew->sa_handler = handler;
    sigemptyset(maskSet);

    /*UTILIZZO VARARGS PER IMPOSTARE LE MASCHERE*/
    va_start(valist, numMasks);
    for (masksCount = 0; masksCount < numMasks; masksCount++)
    {
        sigaddset(maskSet, va_arg(valist, int));
    }
    va_end(valist);

    saNew->sa_mask = *maskSet;
    return sigaction(sigNum, saNew, saOld);
}

void attesaNonAttiva(long nsecMin, long nsecMax)
{
    long ntos;
    long diff;
    long attesa;
    long nsec;
    int sec;
    struct timespec tempoDiAttesa;
    srand(getpid());
    ntos = 1e9L;
    diff = nsecMax - nsecMin;
    if (diff == 0)
    {
        attesa = nsecMax;
    }
    else
    {
        attesa = rand() % diff + nsecMin;
    }
    sec = attesa / ntos;
    nsec = attesa - (sec * ntos);
    
    tempoDiAttesa.tv_sec = sec;
    tempoDiAttesa.tv_nsec = nsec;
    nanosleep(&tempoDiAttesa, NULL);
}