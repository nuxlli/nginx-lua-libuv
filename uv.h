/**
 * This header has utility only as reference for mount of the cdef in uv.lua
 * generated: grep -v "#include" libuv/include/uv.h | cpp | sed -E "s,[A-Z_]+_PRIVATE_[A-Z_]+,,g" | grep -v "^ *#.*" > uv.h
 */
 
typedef struct ngx_queue_s  ngx_queue_t;
struct ngx_queue_s {
    ngx_queue_t  *prev;
    ngx_queue_t  *next;
};
typedef double ev_tstamp;
typedef __signed char		__int8_t;
typedef unsigned char		__uint8_t;
typedef	short			__int16_t;
typedef	unsigned short		__uint16_t;
typedef int			__int32_t;
typedef unsigned int		__uint32_t;
typedef long long		__int64_t;
typedef unsigned long long	__uint64_t;
typedef long			__darwin_intptr_t;
typedef unsigned int		__darwin_natural_t;
typedef int			__darwin_ct_rune_t;	
typedef union {
	char		__mbstate8[128];
	long long	_mbstateL;			
} __mbstate_t;
typedef __mbstate_t		__darwin_mbstate_t;	
typedef long int	__darwin_ptrdiff_t;	
typedef long unsigned int		__darwin_size_t;	
typedef __builtin_va_list	__darwin_va_list;	
typedef int		__darwin_wchar_t;	
typedef __darwin_wchar_t	__darwin_rune_t;	
typedef int		__darwin_wint_t;	
typedef unsigned long		__darwin_clock_t;	
typedef __uint32_t		__darwin_socklen_t;	
typedef long			__darwin_ssize_t;	
typedef long			__darwin_time_t;	
struct __darwin_pthread_handler_rec
{
	void           (*__routine)(void *);	
	void           *__arg;			
	struct __darwin_pthread_handler_rec *__next;
};
struct _opaque_pthread_attr_t { long __sig; char __opaque[56]; };
struct _opaque_pthread_cond_t { long __sig; char __opaque[40]; };
struct _opaque_pthread_condattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_mutex_t { long __sig; char __opaque[56]; };
struct _opaque_pthread_mutexattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_once_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_rwlock_t { long __sig; char __opaque[192]; };
struct _opaque_pthread_rwlockattr_t { long __sig; char __opaque[16]; };
struct _opaque_pthread_t { long __sig; struct __darwin_pthread_handler_rec  *__cleanup_stack; char __opaque[1168]; };
typedef	__int64_t	__darwin_blkcnt_t;	
typedef	__int32_t	__darwin_blksize_t;	
typedef __int32_t	__darwin_dev_t;		
typedef unsigned int	__darwin_fsblkcnt_t;	
typedef unsigned int	__darwin_fsfilcnt_t;	
typedef __uint32_t	__darwin_gid_t;		
typedef __uint32_t	__darwin_id_t;		
typedef __uint64_t	__darwin_ino64_t;	
typedef __darwin_ino64_t __darwin_ino_t;	
typedef __darwin_natural_t __darwin_mach_port_name_t; 
typedef __darwin_mach_port_name_t __darwin_mach_port_t; 
typedef __uint16_t	__darwin_mode_t;	
typedef __int64_t	__darwin_off_t;		
typedef __int32_t	__darwin_pid_t;		
typedef struct _opaque_pthread_attr_t
			__darwin_pthread_attr_t; 
typedef struct _opaque_pthread_cond_t
			__darwin_pthread_cond_t; 
typedef struct _opaque_pthread_condattr_t
			__darwin_pthread_condattr_t; 
typedef unsigned long	__darwin_pthread_key_t;	
typedef struct _opaque_pthread_mutex_t
			__darwin_pthread_mutex_t; 
typedef struct _opaque_pthread_mutexattr_t
			__darwin_pthread_mutexattr_t; 
typedef struct _opaque_pthread_once_t
			__darwin_pthread_once_t; 
typedef struct _opaque_pthread_rwlock_t
			__darwin_pthread_rwlock_t; 
typedef struct _opaque_pthread_rwlockattr_t
			__darwin_pthread_rwlockattr_t; 
typedef struct _opaque_pthread_t
			*__darwin_pthread_t;	
typedef __uint32_t	__darwin_sigset_t;	
typedef __int32_t	__darwin_suseconds_t;	
typedef __uint32_t	__darwin_uid_t;		
typedef __uint32_t	__darwin_useconds_t;	
typedef	unsigned char	__darwin_uuid_t[16];
typedef	char	__darwin_uuid_string_t[37];
typedef	int		__darwin_nl_item;
typedef	int		__darwin_wctrans_t;
typedef	__uint32_t	__darwin_wctype_t;
typedef int sig_atomic_t; 
struct __darwin_i386_thread_state
{
    unsigned int	__eax;
    unsigned int	__ebx;
    unsigned int	__ecx;
    unsigned int	__edx;
    unsigned int	__edi;
    unsigned int	__esi;
    unsigned int	__ebp;
    unsigned int	__esp;
    unsigned int	__ss;
    unsigned int	__eflags;
    unsigned int	__eip;
    unsigned int	__cs;
    unsigned int	__ds;
    unsigned int	__es;
    unsigned int	__fs;
    unsigned int	__gs;
};
struct __darwin_fp_control
{
    unsigned short		__invalid	:1,
    				__denorm	:1,
				__zdiv		:1,
				__ovrfl		:1,
				__undfl		:1,
				__precis	:1,
						:2,
				__pc		:2,
				__rc		:2,
						:1,
						:3;
};
typedef struct __darwin_fp_control	__darwin_fp_control_t;
struct __darwin_fp_status
{
    unsigned short		__invalid	:1,
    				__denorm	:1,
				__zdiv		:1,
				__ovrfl		:1,
				__undfl		:1,
				__precis	:1,
				__stkflt	:1,
				__errsumm	:1,
				__c0		:1,
				__c1		:1,
				__c2		:1,
				__tos		:3,
				__c3		:1,
				__busy		:1;
};
typedef struct __darwin_fp_status	__darwin_fp_status_t;
				
struct __darwin_mmst_reg
{
	char	__mmst_reg[10];
	char	__mmst_rsrv[6];
};
struct __darwin_xmm_reg
{
	char		__xmm_reg[16];
};
struct __darwin_i386_float_state
{
	int 			__fpu_reserved[2];
	struct __darwin_fp_control	__fpu_fcw;		
	struct __darwin_fp_status	__fpu_fsw;		
	__uint8_t		__fpu_ftw;		
	__uint8_t		__fpu_rsrv1;		 
	__uint16_t		__fpu_fop;		
	__uint32_t		__fpu_ip;		
	__uint16_t		__fpu_cs;		
	__uint16_t		__fpu_rsrv2;		
	__uint32_t		__fpu_dp;		
	__uint16_t		__fpu_ds;		
	__uint16_t		__fpu_rsrv3;		
	__uint32_t		__fpu_mxcsr;		
	__uint32_t		__fpu_mxcsrmask;	
	struct __darwin_mmst_reg	__fpu_stmm0;		
	struct __darwin_mmst_reg	__fpu_stmm1;		
	struct __darwin_mmst_reg	__fpu_stmm2;		
	struct __darwin_mmst_reg	__fpu_stmm3;		
	struct __darwin_mmst_reg	__fpu_stmm4;		
	struct __darwin_mmst_reg	__fpu_stmm5;		
	struct __darwin_mmst_reg	__fpu_stmm6;		
	struct __darwin_mmst_reg	__fpu_stmm7;		
	struct __darwin_xmm_reg		__fpu_xmm0;		
	struct __darwin_xmm_reg		__fpu_xmm1;		
	struct __darwin_xmm_reg		__fpu_xmm2;		
	struct __darwin_xmm_reg		__fpu_xmm3;		
	struct __darwin_xmm_reg		__fpu_xmm4;		
	struct __darwin_xmm_reg		__fpu_xmm5;		
	struct __darwin_xmm_reg		__fpu_xmm6;		
	struct __darwin_xmm_reg		__fpu_xmm7;		
	char			__fpu_rsrv4[14*16];	
	int 			__fpu_reserved1;
};
struct __darwin_i386_avx_state
{
	int 			__fpu_reserved[2];
	struct __darwin_fp_control	__fpu_fcw;		
	struct __darwin_fp_status	__fpu_fsw;		
	__uint8_t		__fpu_ftw;		
	__uint8_t		__fpu_rsrv1;		 
	__uint16_t		__fpu_fop;		
	__uint32_t		__fpu_ip;		
	__uint16_t		__fpu_cs;		
	__uint16_t		__fpu_rsrv2;		
	__uint32_t		__fpu_dp;		
	__uint16_t		__fpu_ds;		
	__uint16_t		__fpu_rsrv3;		
	__uint32_t		__fpu_mxcsr;		
	__uint32_t		__fpu_mxcsrmask;	
	struct __darwin_mmst_reg	__fpu_stmm0;		
	struct __darwin_mmst_reg	__fpu_stmm1;		
	struct __darwin_mmst_reg	__fpu_stmm2;		
	struct __darwin_mmst_reg	__fpu_stmm3;		
	struct __darwin_mmst_reg	__fpu_stmm4;		
	struct __darwin_mmst_reg	__fpu_stmm5;		
	struct __darwin_mmst_reg	__fpu_stmm6;		
	struct __darwin_mmst_reg	__fpu_stmm7;		
	struct __darwin_xmm_reg		__fpu_xmm0;		
	struct __darwin_xmm_reg		__fpu_xmm1;		
	struct __darwin_xmm_reg		__fpu_xmm2;		
	struct __darwin_xmm_reg		__fpu_xmm3;		
	struct __darwin_xmm_reg		__fpu_xmm4;		
	struct __darwin_xmm_reg		__fpu_xmm5;		
	struct __darwin_xmm_reg		__fpu_xmm6;		
	struct __darwin_xmm_reg		__fpu_xmm7;		
	char			__fpu_rsrv4[14*16];	
	int 			__fpu_reserved1;
	char			__avx_reserved1[64];
	struct __darwin_xmm_reg		__fpu_ymmh0;		
	struct __darwin_xmm_reg		__fpu_ymmh1;		
	struct __darwin_xmm_reg		__fpu_ymmh2;		
	struct __darwin_xmm_reg		__fpu_ymmh3;		
	struct __darwin_xmm_reg		__fpu_ymmh4;		
	struct __darwin_xmm_reg		__fpu_ymmh5;		
	struct __darwin_xmm_reg		__fpu_ymmh6;		
	struct __darwin_xmm_reg		__fpu_ymmh7;		
};
struct __darwin_i386_exception_state
{
	__uint16_t	__trapno;
	__uint16_t	__cpu;
	__uint32_t	__err;
	__uint32_t	__faultvaddr;
};
struct __darwin_x86_debug_state32
{
	unsigned int	__dr0;
	unsigned int	__dr1;
	unsigned int	__dr2;
	unsigned int	__dr3;
	unsigned int	__dr4;
	unsigned int	__dr5;
	unsigned int	__dr6;
	unsigned int	__dr7;
};
struct __darwin_x86_thread_state64
{
	__uint64_t	__rax;
	__uint64_t	__rbx;
	__uint64_t	__rcx;
	__uint64_t	__rdx;
	__uint64_t	__rdi;
	__uint64_t	__rsi;
	__uint64_t	__rbp;
	__uint64_t	__rsp;
	__uint64_t	__r8;
	__uint64_t	__r9;
	__uint64_t	__r10;
	__uint64_t	__r11;
	__uint64_t	__r12;
	__uint64_t	__r13;
	__uint64_t	__r14;
	__uint64_t	__r15;
	__uint64_t	__rip;
	__uint64_t	__rflags;
	__uint64_t	__cs;
	__uint64_t	__fs;
	__uint64_t	__gs;
};
struct __darwin_x86_float_state64
{
	int 			__fpu_reserved[2];
	struct __darwin_fp_control	__fpu_fcw;		
	struct __darwin_fp_status	__fpu_fsw;		
	__uint8_t		__fpu_ftw;		
	__uint8_t		__fpu_rsrv1;		 
	__uint16_t		__fpu_fop;		
	
	__uint32_t		__fpu_ip;		
	__uint16_t		__fpu_cs;		
	__uint16_t		__fpu_rsrv2;		
	
	__uint32_t		__fpu_dp;		
	__uint16_t		__fpu_ds;		
	__uint16_t		__fpu_rsrv3;		
	__uint32_t		__fpu_mxcsr;		
	__uint32_t		__fpu_mxcsrmask;	
	struct __darwin_mmst_reg	__fpu_stmm0;		
	struct __darwin_mmst_reg	__fpu_stmm1;		
	struct __darwin_mmst_reg	__fpu_stmm2;		
	struct __darwin_mmst_reg	__fpu_stmm3;		
	struct __darwin_mmst_reg	__fpu_stmm4;		
	struct __darwin_mmst_reg	__fpu_stmm5;		
	struct __darwin_mmst_reg	__fpu_stmm6;		
	struct __darwin_mmst_reg	__fpu_stmm7;		
	struct __darwin_xmm_reg		__fpu_xmm0;		
	struct __darwin_xmm_reg		__fpu_xmm1;		
	struct __darwin_xmm_reg		__fpu_xmm2;		
	struct __darwin_xmm_reg		__fpu_xmm3;		
	struct __darwin_xmm_reg		__fpu_xmm4;		
	struct __darwin_xmm_reg		__fpu_xmm5;		
	struct __darwin_xmm_reg		__fpu_xmm6;		
	struct __darwin_xmm_reg		__fpu_xmm7;		
	struct __darwin_xmm_reg		__fpu_xmm8;		
	struct __darwin_xmm_reg		__fpu_xmm9;		
	struct __darwin_xmm_reg		__fpu_xmm10;		
	struct __darwin_xmm_reg		__fpu_xmm11;		
	struct __darwin_xmm_reg		__fpu_xmm12;		
	struct __darwin_xmm_reg		__fpu_xmm13;		
	struct __darwin_xmm_reg		__fpu_xmm14;		
	struct __darwin_xmm_reg		__fpu_xmm15;		
	char			__fpu_rsrv4[6*16];	
	int 			__fpu_reserved1;
};
struct __darwin_x86_avx_state64
{
	int 			__fpu_reserved[2];
	struct __darwin_fp_control	__fpu_fcw;		
	struct __darwin_fp_status	__fpu_fsw;		
	__uint8_t		__fpu_ftw;		
	__uint8_t		__fpu_rsrv1;		 
	__uint16_t		__fpu_fop;		
	
	__uint32_t		__fpu_ip;		
	__uint16_t		__fpu_cs;		
	__uint16_t		__fpu_rsrv2;		
	
	__uint32_t		__fpu_dp;		
	__uint16_t		__fpu_ds;		
	__uint16_t		__fpu_rsrv3;		
	__uint32_t		__fpu_mxcsr;		
	__uint32_t		__fpu_mxcsrmask;	
	struct __darwin_mmst_reg	__fpu_stmm0;		
	struct __darwin_mmst_reg	__fpu_stmm1;		
	struct __darwin_mmst_reg	__fpu_stmm2;		
	struct __darwin_mmst_reg	__fpu_stmm3;		
	struct __darwin_mmst_reg	__fpu_stmm4;		
	struct __darwin_mmst_reg	__fpu_stmm5;		
	struct __darwin_mmst_reg	__fpu_stmm6;		
	struct __darwin_mmst_reg	__fpu_stmm7;		
	struct __darwin_xmm_reg		__fpu_xmm0;		
	struct __darwin_xmm_reg		__fpu_xmm1;		
	struct __darwin_xmm_reg		__fpu_xmm2;		
	struct __darwin_xmm_reg		__fpu_xmm3;		
	struct __darwin_xmm_reg		__fpu_xmm4;		
	struct __darwin_xmm_reg		__fpu_xmm5;		
	struct __darwin_xmm_reg		__fpu_xmm6;		
	struct __darwin_xmm_reg		__fpu_xmm7;		
	struct __darwin_xmm_reg		__fpu_xmm8;		
	struct __darwin_xmm_reg		__fpu_xmm9;		
	struct __darwin_xmm_reg		__fpu_xmm10;		
	struct __darwin_xmm_reg		__fpu_xmm11;		
	struct __darwin_xmm_reg		__fpu_xmm12;		
	struct __darwin_xmm_reg		__fpu_xmm13;		
	struct __darwin_xmm_reg		__fpu_xmm14;		
	struct __darwin_xmm_reg		__fpu_xmm15;		
	char			__fpu_rsrv4[6*16];	
	int 			__fpu_reserved1;
	char			__avx_reserved1[64];
	struct __darwin_xmm_reg		__fpu_ymmh0;		
	struct __darwin_xmm_reg		__fpu_ymmh1;		
	struct __darwin_xmm_reg		__fpu_ymmh2;		
	struct __darwin_xmm_reg		__fpu_ymmh3;		
	struct __darwin_xmm_reg		__fpu_ymmh4;		
	struct __darwin_xmm_reg		__fpu_ymmh5;		
	struct __darwin_xmm_reg		__fpu_ymmh6;		
	struct __darwin_xmm_reg		__fpu_ymmh7;		
	struct __darwin_xmm_reg		__fpu_ymmh8;		
	struct __darwin_xmm_reg		__fpu_ymmh9;		
	struct __darwin_xmm_reg		__fpu_ymmh10;		
	struct __darwin_xmm_reg		__fpu_ymmh11;		
	struct __darwin_xmm_reg		__fpu_ymmh12;		
	struct __darwin_xmm_reg		__fpu_ymmh13;		
	struct __darwin_xmm_reg		__fpu_ymmh14;		
	struct __darwin_xmm_reg		__fpu_ymmh15;		
};
struct __darwin_x86_exception_state64
{
    __uint16_t	__trapno;
    __uint16_t	__cpu;
    __uint32_t	__err;
    __uint64_t	__faultvaddr;
};
struct __darwin_x86_debug_state64
{
	__uint64_t	__dr0;
	__uint64_t	__dr1;
	__uint64_t	__dr2;
	__uint64_t	__dr3;
	__uint64_t	__dr4;
	__uint64_t	__dr5;
	__uint64_t	__dr6;
	__uint64_t	__dr7;
};
struct __darwin_mcontext32
{
	struct __darwin_i386_exception_state	__es;
	struct __darwin_i386_thread_state	__ss;
	struct __darwin_i386_float_state	__fs;
};
struct __darwin_mcontext_avx32
{
	struct __darwin_i386_exception_state	__es;
	struct __darwin_i386_thread_state	__ss;
	struct __darwin_i386_avx_state		__fs;
};
struct __darwin_mcontext64
{
	struct __darwin_x86_exception_state64	__es;
	struct __darwin_x86_thread_state64	__ss;
	struct __darwin_x86_float_state64	__fs;
};
struct __darwin_mcontext_avx64
{
	struct __darwin_x86_exception_state64	__es;
	struct __darwin_x86_thread_state64	__ss;
	struct __darwin_x86_avx_state64		__fs;
};
typedef struct __darwin_mcontext64	*mcontext_t;
struct __darwin_sigaltstack
{
	void		*ss_sp;		
	__darwin_size_t ss_size;	
	int		ss_flags;	
};
struct __darwin_ucontext
{
	int			uc_onstack;
	__darwin_sigset_t	uc_sigmask;	
	struct __darwin_sigaltstack 	uc_stack;	
	struct __darwin_ucontext	*uc_link;	
	__darwin_size_t		uc_mcsize;	
	struct __darwin_mcontext64	*uc_mcontext;	
};
typedef struct __darwin_sigaltstack	stack_t; 
typedef struct __darwin_ucontext	ucontext_t;	
typedef __darwin_pid_t			pid_t;
typedef __darwin_pthread_attr_t		pthread_attr_t;
typedef __darwin_sigset_t		sigset_t;
typedef	__darwin_size_t			size_t;
typedef __darwin_uid_t			uid_t;
union sigval {
	
	int	sival_int;
	void	*sival_ptr;
};
struct sigevent {
	int				sigev_notify;				
	int				sigev_signo;				
	union sigval	sigev_value;				
	void			(*sigev_notify_function)(union sigval);	  
	pthread_attr_t	*sigev_notify_attributes;	
};
typedef struct __siginfo {
	int	si_signo;		
	int	si_errno;		
	int	si_code;		
	pid_t	si_pid;			
	uid_t	si_uid;			
	int	si_status;		
	void	*si_addr;		
	union sigval si_value;		
	long	si_band;		
	unsigned long	__pad[7];	
} siginfo_t;
union __sigaction_u {
	void    (*__sa_handler)(int);
	void    (*__sa_sigaction)(int, struct __siginfo *,
		       void *);
};
struct	__sigaction {
	union __sigaction_u __sigaction_u;  
	void    (*sa_tramp)(void *, int, int, siginfo_t *, void *);
	sigset_t sa_mask;		
	int	sa_flags;		
};
struct	sigaction {
	union __sigaction_u __sigaction_u;  
	sigset_t sa_mask;		
	int	sa_flags;		
};
typedef	void (*sig_t)(int);	
struct	sigvec {
	void	(*sv_handler)(int);	
	int	sv_mask;		
	int	sv_flags;		
};
struct	sigstack {
	char	*ss_sp;			
	int	ss_onstack;		
};
void	(*signal(int, void (*)(int)))(int);
typedef __darwin_pthread_t	pthread_t;
extern __const char *__const sys_signame[32];
extern __const char *__const sys_siglist[32];
int	raise(int);
void	(*bsd_signal(int, void (*)(int)))(int);
int	kill(pid_t, int) __asm("_" "kill" );
int	killpg(pid_t, int) __asm("_" "killpg" );
int	pthread_kill(pthread_t, int);
int	pthread_sigmask(int, __const sigset_t *, sigset_t *) __asm("_" "pthread_sigmask" );
int	sigaction(int, __const struct sigaction * ,
	    struct sigaction * );
int	sigaddset(sigset_t *, int);
int	sigaltstack(__const stack_t * , stack_t * )  __asm("_" "sigaltstack" );
int	sigdelset(sigset_t *, int);
int	sigemptyset(sigset_t *);
int	sigfillset(sigset_t *);
int	sighold(int);
int	sigignore(int);
int	siginterrupt(int, int);
int	sigismember(__const sigset_t *, int);
int	sigpause(int) __asm("_" "sigpause"  );
int	sigpending(sigset_t *);
int	sigprocmask(int, __const sigset_t * , sigset_t * );
int	sigrelse(int);
void    (*sigset(int, void (*)(int)))(int); 
int	sigsuspend(__const sigset_t *) __asm("_" "sigsuspend"  );
int	sigwait(__const sigset_t * , int * ) __asm("_" "sigwait"  );
void	psignal(unsigned int, __const char *);
int	sigblock(int);
int	sigsetmask(int);
int	sigvec(int, struct sigvec *, struct sigvec *);
static __inline int
__sigbits(int __signo)
{
    return __signo > 32 ? 0 : (1 << (__signo - 1));
}
 
 
        
    
    
            
        
struct timespec
{
	__darwin_time_t	tv_sec;
	long		tv_nsec;
};
typedef	__darwin_blkcnt_t	blkcnt_t;
typedef	__darwin_blksize_t	blksize_t;
typedef	__darwin_dev_t		dev_t;		
typedef	__darwin_ino_t		ino_t;		
typedef	__darwin_ino64_t	ino64_t;	
typedef	__darwin_mode_t		mode_t;
typedef	__uint16_t		nlink_t;	
typedef __darwin_gid_t		gid_t;
typedef __darwin_off_t		off_t;
typedef	__darwin_time_t		time_t;
struct ostat {
	__uint16_t	st_dev;		
	ino_t		st_ino;		
	mode_t		st_mode;	
	nlink_t		st_nlink;	
	__uint16_t	st_uid;		
	__uint16_t	st_gid;		
	__uint16_t	st_rdev;	
	__int32_t	st_size;	
	struct	timespec st_atimespec;	
	struct	timespec st_mtimespec;	
	struct	timespec st_ctimespec;	
	__int32_t	st_blksize;	
	__int32_t	st_blocks;	
	__uint32_t	st_flags;	
	__uint32_t	st_gen;		
};
struct stat { 	dev_t		st_dev;			 	mode_t		st_mode;		 	nlink_t		st_nlink;		 	__darwin_ino64_t st_ino;		 	uid_t		st_uid;			 	gid_t		st_gid;			 	dev_t		st_rdev;		 	struct timespec st_atimespec;		 	struct timespec st_mtimespec;		 	struct timespec st_ctimespec;		 	struct timespec st_birthtimespec; 	off_t		st_size;		 	blkcnt_t	st_blocks;		 	blksize_t	st_blksize;		 	__uint32_t	st_flags;		 	__uint32_t	st_gen;			 	__int32_t	st_lspare;		 	__int64_t	st_qspare[2];		 };
struct stat64 { 	dev_t		st_dev;			 	mode_t		st_mode;		 	nlink_t		st_nlink;		 	__darwin_ino64_t st_ino;		 	uid_t		st_uid;			 	gid_t		st_gid;			 	dev_t		st_rdev;		 	struct timespec st_atimespec;		 	struct timespec st_mtimespec;		 	struct timespec st_ctimespec;		 	struct timespec st_birthtimespec; 	off_t		st_size;		 	blkcnt_t	st_blocks;		 	blksize_t	st_blksize;		 	__uint32_t	st_flags;		 	__uint32_t	st_gen;			 	__int32_t	st_lspare;		 	__int64_t	st_qspare[2];		 };
							
							
	
					
	
	
int	chmod(__const char *, mode_t) __asm("_" "chmod" );
int	fchmod(int, mode_t) __asm("_" "fchmod" );
int	fstat(int, struct stat *) __asm("_" "fstat" "$INODE64");
int	lstat(__const char *, struct stat *) __asm("_" "lstat" "$INODE64");
int	mkdir(__const char *, mode_t);
int	mkfifo(__const char *, mode_t);
int	stat(__const char *, struct stat *) __asm("_" "stat" "$INODE64");
int	mknod(__const char *, mode_t, dev_t);
mode_t	umask(mode_t);
struct _filesec;
typedef struct _filesec	*filesec_t;
int	chflags(__const char *, __uint32_t);
int	chmodx_np(__const char *, filesec_t);
int	fchflags(int, __uint32_t);
int	fchmodx_np(int, filesec_t);
int	fstatx_np(int, struct stat *, filesec_t) __asm("_" "fstatx_np" "$INODE64");
int	lchflags(__const char *, __uint32_t) __OSX_AVAILABLE_STARTING(1050, 20000);
int	lchmod(__const char *, mode_t) __OSX_AVAILABLE_STARTING(1050, 20000);
int	lstatx_np(__const char *, struct stat *, filesec_t) __asm("_" "lstatx_np" "$INODE64");
int	mkdirx_np(__const char *, filesec_t);
int	mkfifox_np(__const char *, filesec_t);
int	statx_np(__const char *, struct stat *, filesec_t) __asm("_" "statx_np" "$INODE64");
int	umaskx_np(filesec_t) __OSX_AVAILABLE_BUT_DEPRECATED(1040,1060,99999,99999);
int	fstatx64_np(int, struct stat64 *, filesec_t) __OSX_AVAILABLE_BUT_DEPRECATED(1050,1060,99999,99999);
int	lstatx64_np(__const char *, struct stat64 *, filesec_t) __OSX_AVAILABLE_BUT_DEPRECATED(1050,1060,99999,99999);
int	statx64_np(__const char *, struct stat64 *, filesec_t) __OSX_AVAILABLE_BUT_DEPRECATED(1050,1060,99999,99999);
int	fstat64(int, struct stat64 *) __OSX_AVAILABLE_BUT_DEPRECATED(1050,1060,99999,99999);
int	lstat64(__const char *, struct stat64 *) __OSX_AVAILABLE_BUT_DEPRECATED(1050,1060,99999,99999);
int	stat64(__const char *, struct stat64 *) __OSX_AVAILABLE_BUT_DEPRECATED(1050,1060,99999,99999);
struct ev_loop;
enum {
  EV_UNDEF    =         -1, 
  EV_NONE     =       0x00, 
  EV_READ     =       0x01, 
  EV_WRITE    =       0x02, 
  EV_LIBUV_KQUEUE_HACK = 0x40,
  EV__IOFDSET =       0x80, 
  EV_IO       =    EV_READ, 
  EV_TIMER    = 0x00000100, 
  EV_TIMEOUT  =   EV_TIMER, 
  EV_PERIODIC = 0x00000200, 
  EV_SIGNAL   = 0x00000400, 
  EV_CHILD    = 0x00000800, 
  EV_STAT     = 0x00001000, 
  EV_IDLE     = 0x00002000, 
  EV_PREPARE  = 0x00004000, 
  EV_CHECK    = 0x00008000, 
  EV_EMBED    = 0x00010000, 
  EV_FORK     = 0x00020000, 
  EV_CLEANUP  = 0x00040000, 
  EV_ASYNC    = 0x00080000, 
  EV_CUSTOM   = 0x01000000, 
  EV_ERROR    = (-2147483647 - 1) 
};
typedef struct ev_watcher
{
  int active; 			  int pending; 			  int priority; 		  void *data; 				  void (*cb)(struct ev_loop *loop, struct ev_watcher *w, int revents);
} ev_watcher;
typedef struct ev_watcher_list
{
  int active; 			  int pending; 			  int priority; 		  void *data; 				  void (*cb)(struct ev_loop *loop, struct ev_watcher_list *w, int revents);				  struct ev_watcher_list *next;
} ev_watcher_list;
typedef struct ev_watcher_time
{
  int active; 			  int pending; 			  int priority; 		  void *data; 				  void (*cb)(struct ev_loop *loop, struct ev_watcher_time *w, int revents);				  ev_tstamp at;
} ev_watcher_time;
typedef struct ev_io
{
  int active; 			  int pending; 			  int priority; 		  void *data; 				  void (*cb)(struct ev_loop *loop, struct ev_io *w, int revents);				  struct ev_watcher_list *next;
  int fd;     
  int events; 
} ev_io;
typedef struct ev_timer
{
  int active; 			  int pending; 			  int priority; 		  void *data; 				  void (*cb)(struct ev_loop *loop, struct ev_timer *w, int revents);				  ev_tstamp at;
  ev_tstamp repeat; 
} ev_timer;
typedef struct ev_periodic
{
  int active; 			  int pending; 			  int priority; 		  void *data; 				  void (*cb)(struct ev_loop *loop, struct ev_periodic *w, int revents);				  ev_tstamp at;
  ev_tstamp offset; 
  ev_tstamp interval; 
  ev_tstamp (*reschedule_cb)(struct ev_periodic *w, ev_tstamp now); 
} ev_periodic;
typedef struct ev_signal
{
  int active; 			  int pending; 			  int priority; 		  void *data; 				  void (*cb)(struct ev_loop *loop, struct ev_signal *w, int revents);				  struct ev_watcher_list *next;
  int signum; 
} ev_signal;
typedef struct ev_child
{
  int active; 			  int pending; 			  int priority; 		  void *data; 				  void (*cb)(struct ev_loop *loop, struct ev_child *w, int revents);				  struct ev_watcher_list *next;
  int flags;   
  int pid;     
  int rpid;    
  int rstatus; 
} ev_child;
typedef struct stat ev_statdata;
typedef struct ev_stat
{
  int active; 			  int pending; 			  int priority; 		  void *data; 				  void (*cb)(struct ev_loop *loop, struct ev_stat *w, int revents);				  struct ev_watcher_list *next;
  ev_timer timer;     
  ev_tstamp interval; 
  __const char *path;   
  ev_statdata prev;   
  ev_statdata attr;   
  int wd; 
} ev_stat;
typedef struct ev_idle
{
  int active; 			  int pending; 			  int priority; 		  void *data; 				  void (*cb)(struct ev_loop *loop, struct ev_idle *w, int revents);
} ev_idle;
typedef struct ev_prepare
{
  int active; 			  int pending; 			  int priority; 		  void *data; 				  void (*cb)(struct ev_loop *loop, struct ev_prepare *w, int revents);
} ev_prepare;
typedef struct ev_check
{
  int active; 			  int pending; 			  int priority; 		  void *data; 				  void (*cb)(struct ev_loop *loop, struct ev_check *w, int revents);
} ev_check;
typedef struct ev_fork
{
  int active; 			  int pending; 			  int priority; 		  void *data; 				  void (*cb)(struct ev_loop *loop, struct ev_fork *w, int revents);
} ev_fork;
typedef struct ev_cleanup
{
  int active; 			  int pending; 			  int priority; 		  void *data; 				  void (*cb)(struct ev_loop *loop, struct ev_cleanup *w, int revents);
} ev_cleanup;
typedef struct ev_embed
{
  int active; 			  int pending; 			  int priority; 		  void *data; 				  void (*cb)(struct ev_loop *loop, struct ev_embed *w, int revents);
  struct ev_loop *other; 
  ev_io io;              
  ev_prepare prepare;    
  ev_check check;        
  ev_timer timer;        
  ev_periodic periodic;  
  ev_idle idle;          
  ev_fork fork;          
  ev_cleanup cleanup;    
} ev_embed;
typedef struct ev_async
{
  int active; 			  int pending; 			  int priority; 		  void *data; 				  void (*cb)(struct ev_loop *loop, struct ev_async *w, int revents);
  sig_atomic_t __volatile sent; 
} ev_async;
union ev_any_watcher
{
  struct ev_watcher w;
  struct ev_watcher_list wl;
  struct ev_io io;
  struct ev_timer timer;
  struct ev_periodic periodic;
  struct ev_signal signal;
  struct ev_child child;
  struct ev_stat stat;
  struct ev_idle idle;
  struct ev_prepare prepare;
  struct ev_check check;
  struct ev_fork fork;
  struct ev_cleanup cleanup;
  struct ev_embed embed;
  struct ev_async async;
};
enum {
  
  EVFLAG_AUTO      = 0x00000000U, 
  
  EVFLAG_NOENV     = 0x01000000U, 
  EVFLAG_FORKCHECK = 0x02000000U, 
  
  EVFLAG_NOINOTIFY = 0x00100000U, 
  EVFLAG_NOSIGFD   = 0, 
  EVFLAG_SIGNALFD  = 0x00200000U, 
  EVFLAG_NOSIGMASK = 0x00400000U  
};
enum {
  EVBACKEND_SELECT  = 0x00000001U, 
  EVBACKEND_POLL    = 0x00000002U, 
  EVBACKEND_EPOLL   = 0x00000004U, 
  EVBACKEND_KQUEUE  = 0x00000008U, 
  EVBACKEND_DEVPOLL = 0x00000010U,  
  EVBACKEND_PORT    = 0x00000020U, 
  EVBACKEND_ALL     = 0x0000003FU, 
  EVBACKEND_MASK    = 0x0000FFFFU  
};
int ev_version_major (void);
int ev_version_minor (void);
unsigned int ev_supported_backends (void);
unsigned int ev_recommended_backends (void);
unsigned int ev_embeddable_backends (void);
ev_tstamp ev_time (void);
void ev_sleep (ev_tstamp delay); 
void ev_set_allocator (void *(*cb)(void *ptr, long size));
void ev_set_syserr_cb (void (*cb)(__const char *msg));
struct ev_loop *ev_default_loop (unsigned int flags );
static struct ev_loop *
__attribute__ ((unused)) ev_default_loop_uc_ (void)
{
  extern struct ev_loop *ev_default_loop_ptr;
  return ev_default_loop_ptr;
}
static int
__attribute__ ((unused)) ev_is_default_loop (struct ev_loop *loop)
{
  return loop == ev_default_loop_uc_ ();
}
struct ev_loop *ev_loop_new (unsigned int flags );
int ev_loop_refcount (struct ev_loop *loop);
ev_tstamp ev_now (struct ev_loop *loop); 
void ev_loop_destroy (struct ev_loop *loop);
void ev_loop_fork (struct ev_loop *loop);
unsigned int ev_backend (struct ev_loop *loop); 
void ev_now_update (struct ev_loop *loop); 
enum {
  EVRUN_NOWAIT = 1, 
  EVRUN_ONCE   = 2  
};
enum {
  EVBREAK_CANCEL = 0, 
  EVBREAK_ONE    = 1, 
  EVBREAK_ALL    = 2  
};
void ev_run (struct ev_loop *loop, int flags );
void ev_break (struct ev_loop *loop, int how ); 
void ev_ref   (struct ev_loop *loop);
void ev_unref (struct ev_loop *loop);
void ev_once (struct ev_loop *loop, int fd, int events, ev_tstamp timeout, void (*cb)(int revents, void *arg), void *arg);
unsigned int ev_iteration (struct ev_loop *loop); 
unsigned int ev_depth     (struct ev_loop *loop); 
void         ev_verify    (struct ev_loop *loop); 
void ev_set_io_collect_interval (struct ev_loop *loop, ev_tstamp interval); 
void ev_set_timeout_collect_interval (struct ev_loop *loop, ev_tstamp interval); 
void ev_set_userdata (struct ev_loop *loop, void *data);
void *ev_userdata (struct ev_loop *loop);
void ev_set_invoke_pending_cb (struct ev_loop *loop, void (*invoke_pending_cb)(struct ev_loop *loop));
void ev_set_loop_release_cb (struct ev_loop *loop, void (*release)(struct ev_loop *loop), void (*acquire)(struct ev_loop *loop));
unsigned int ev_pending_count (struct ev_loop *loop); 
void ev_invoke_pending (struct ev_loop *loop); 
void ev_suspend (struct ev_loop *loop);
void ev_resume  (struct ev_loop *loop);
void ev_feed_event     (struct ev_loop *loop, void *w, int revents);
void ev_feed_fd_event  (struct ev_loop *loop, int fd, int revents);
void ev_feed_signal    (int signum);
void ev_feed_signal_event (struct ev_loop *loop, int signum);
void ev_invoke         (struct ev_loop *loop, void *w, int revents);
int  ev_clear_pending  (struct ev_loop *loop, void *w);
void ev_io_start       (struct ev_loop *loop, ev_io *w);
void ev_io_stop        (struct ev_loop *loop, ev_io *w);
void ev_timer_start    (struct ev_loop *loop, ev_timer *w);
void ev_timer_stop     (struct ev_loop *loop, ev_timer *w);
void ev_timer_again    (struct ev_loop *loop, ev_timer *w);
ev_tstamp ev_timer_remaining (struct ev_loop *loop, ev_timer *w);
void ev_periodic_start (struct ev_loop *loop, ev_periodic *w);
void ev_periodic_stop  (struct ev_loop *loop, ev_periodic *w);
void ev_periodic_again (struct ev_loop *loop, ev_periodic *w);
void ev_signal_start   (struct ev_loop *loop, ev_signal *w);
void ev_signal_stop    (struct ev_loop *loop, ev_signal *w);
void ev_child_start    (struct ev_loop *loop, ev_child *w);
void ev_child_stop     (struct ev_loop *loop, ev_child *w);
void ev_stat_start     (struct ev_loop *loop, ev_stat *w);
void ev_stat_stop      (struct ev_loop *loop, ev_stat *w);
void ev_stat_stat      (struct ev_loop *loop, ev_stat *w);
void ev_idle_start     (struct ev_loop *loop, ev_idle *w);
void ev_idle_stop      (struct ev_loop *loop, ev_idle *w);
void ev_prepare_start  (struct ev_loop *loop, ev_prepare *w);
void ev_prepare_stop   (struct ev_loop *loop, ev_prepare *w);
void ev_check_start    (struct ev_loop *loop, ev_check *w);
void ev_check_stop     (struct ev_loop *loop, ev_check *w);
void ev_fork_start     (struct ev_loop *loop, ev_fork *w);
void ev_fork_stop      (struct ev_loop *loop, ev_fork *w);
void ev_cleanup_start  (struct ev_loop *loop, ev_cleanup *w);
void ev_cleanup_stop   (struct ev_loop *loop, ev_cleanup *w);
void ev_embed_start    (struct ev_loop *loop, ev_embed *w);
void ev_embed_stop     (struct ev_loop *loop, ev_embed *w);
void ev_embed_sweep    (struct ev_loop *loop, ev_embed *w);
void ev_async_start    (struct ev_loop *loop, ev_async *w);
void ev_async_stop     (struct ev_loop *loop, ev_async *w);
void ev_async_send     (struct ev_loop *loop, ev_async *w);
    static void __attribute__ ((unused)) ev_loop   (struct ev_loop *loop, int flags) { ev_run   (loop, flags); }
    static void __attribute__ ((unused)) ev_unloop (struct ev_loop *loop, int how  ) { ev_break (loop, how  ); }
    static void __attribute__ ((unused)) ev_default_destroy (void) { ev_loop_destroy (ev_default_loop (0)); }
    static void __attribute__ ((unused)) ev_default_fork    (void) { ev_loop_fork    (ev_default_loop (0)); }
      static unsigned int __attribute__ ((unused)) ev_loop_count  (struct ev_loop *loop) { return ev_iteration  (loop); }
      static unsigned int __attribute__ ((unused)) ev_loop_depth  (struct ev_loop *loop) { return ev_depth      (loop); }
      static void         __attribute__ ((unused)) ev_loop_verify (struct ev_loop *loop) {        ev_verify     (loop); }
typedef long int ptrdiff_t;
typedef int wchar_t;
typedef	__signed char		int8_t;
typedef	unsigned char		u_int8_t;
typedef	short			int16_t;
typedef	unsigned short		u_int16_t;
typedef	int			int32_t;
typedef	unsigned int		u_int32_t;
typedef	long long		int64_t;
typedef	unsigned long long	u_int64_t;
typedef int64_t			register_t;
typedef __darwin_intptr_t	intptr_t;
typedef unsigned long		uintptr_t;
typedef u_int64_t		user_addr_t;	
typedef u_int64_t		user_size_t;	
typedef int64_t			user_ssize_t;
typedef int64_t			user_long_t;
typedef u_int64_t		user_ulong_t;
typedef int64_t			user_time_t;
typedef int64_t			user_off_t;
typedef u_int64_t		syscall_arg_t;
static __inline__
__uint16_t
_OSSwapInt16(
    __uint16_t        _data
)
{
    return ((_data << 8) | (_data >> 8));
}
static __inline__
__uint32_t
_OSSwapInt32(
    __uint32_t        _data
)
{
    return __builtin_bswap32(_data);
}
static __inline__
__uint64_t
_OSSwapInt64(
    __uint64_t        _data
)
{
    return __builtin_bswap64(_data);
}
typedef	unsigned char		u_char;
typedef	unsigned short		u_short;
typedef	unsigned int		u_int;
typedef	unsigned long		u_long;
typedef	unsigned short		ushort;		
typedef	unsigned int		uint;		
typedef	u_int64_t		u_quad_t;	
typedef	int64_t			quad_t;
typedef	quad_t *		qaddr_t;
typedef	char *			caddr_t;	
typedef	int32_t			daddr_t;	
typedef	u_int32_t		fixpt_t;	
typedef	__uint32_t		in_addr_t;	
typedef	__uint16_t		in_port_t;
typedef	__int32_t		key_t;		
typedef __darwin_id_t		id_t;		
typedef	int32_t			segsz_t;	
typedef	int32_t			swblk_t;	
typedef	__darwin_clock_t	clock_t;
typedef	__darwin_ssize_t	ssize_t;
typedef __darwin_useconds_t	useconds_t;
typedef __darwin_suseconds_t	suseconds_t;
typedef	struct fd_set {
	__int32_t	fds_bits[((((1024) % ( (sizeof(__int32_t) * 8))) == 0) ? ((1024) / ( (sizeof(__int32_t) * 8))) : (((1024) / ( (sizeof(__int32_t) * 8))) + 1))];
} fd_set;
static __inline int
__darwin_fd_isset(int _n, __const struct fd_set *_p)
{
	return (_p->fds_bits[_n/(sizeof(__int32_t) * 8)] & (1<<(_n % (sizeof(__int32_t) * 8))));
}
typedef __int32_t	fd_mask;
typedef __darwin_pthread_cond_t		pthread_cond_t;
typedef __darwin_pthread_condattr_t	pthread_condattr_t;
typedef __darwin_pthread_mutex_t	pthread_mutex_t;
typedef __darwin_pthread_mutexattr_t	pthread_mutexattr_t;
typedef __darwin_pthread_once_t		pthread_once_t;
typedef __darwin_pthread_rwlock_t	pthread_rwlock_t;
typedef __darwin_pthread_rwlockattr_t	pthread_rwlockattr_t;
typedef __darwin_pthread_key_t		pthread_key_t;
typedef __darwin_fsblkcnt_t		fsblkcnt_t;
typedef __darwin_fsfilcnt_t		fsfilcnt_t;
typedef struct eio_req    eio_req;
typedef struct eio_dirent eio_dirent;
typedef int (*eio_cb)(eio_req *req);
  typedef uid_t    eio_uid_t;
  typedef gid_t    eio_gid_t;
  typedef ssize_t  eio_ssize_t;
  typedef ino_t    eio_ino_t;
  typedef mode_t   eio_mode_t;
enum
{
  EIO_READDIR_DENTS         = 0x01, 
  EIO_READDIR_DIRS_FIRST    = 0x02, 
  EIO_READDIR_STAT_ORDER    = 0x04, 
  EIO_READDIR_FOUND_UNKNOWN = 0x80, 
  EIO_READDIR_CUSTOM1       = 0x100, 
  EIO_READDIR_CUSTOM2       = 0x200  
};
enum eio_dtype
{
  EIO_DT_UNKNOWN =  0,
  EIO_DT_FIFO    =  1,
  EIO_DT_CHR     =  2,
  EIO_DT_MPC     =  3, 
  EIO_DT_DIR     =  4,
  EIO_DT_NAM     =  5, 
  EIO_DT_BLK     =  6,
  EIO_DT_MPB     =  7, 
  EIO_DT_REG     =  8,
  EIO_DT_NWK     =  9, 
  EIO_DT_CMP     =  9, 
  EIO_DT_LNK     = 10,
  
  EIO_DT_SOCK    = 12,
  EIO_DT_DOOR    = 13, 
  EIO_DT_WHT     = 14,
  EIO_DT_MAX     = 15  
};
struct eio_dirent
{
  int nameofs; 
  unsigned short namelen; 
  unsigned char type; 
  __signed char score; 
  eio_ino_t inode; 
};
enum
{
  EIO_MS_ASYNC      = 1,
  EIO_MS_INVALIDATE = 2,
  EIO_MS_SYNC       = 4
};
enum
{
  EIO_MT_MODIFY     = 1
};
enum
{
  EIO_SYNC_FILE_RANGE_WAIT_BEFORE = 1,
  EIO_SYNC_FILE_RANGE_WRITE       = 2,
  EIO_SYNC_FILE_RANGE_WAIT_AFTER  = 4
};
enum
{
  EIO_FALLOC_FL_KEEP_SIZE = 1 
};
typedef double eio_tstamp;
enum
{
  EIO_CUSTOM,
  EIO_OPEN, EIO_CLOSE, EIO_DUP2,
  EIO_READ, EIO_WRITE,
  EIO_READAHEAD, EIO_SENDFILE,
  EIO_STAT, EIO_LSTAT, EIO_FSTAT,
  EIO_STATVFS, EIO_FSTATVFS,
  EIO_TRUNCATE, EIO_FTRUNCATE,
  EIO_UTIME, EIO_FUTIME,
  EIO_CHMOD, EIO_FCHMOD,
  EIO_CHOWN, EIO_FCHOWN,
  EIO_SYNC, EIO_FSYNC, EIO_FDATASYNC, EIO_SYNCFS,
  EIO_MSYNC, EIO_MTOUCH, EIO_SYNC_FILE_RANGE, EIO_FALLOCATE,
  EIO_MLOCK, EIO_MLOCKALL,
  EIO_UNLINK, EIO_RMDIR, EIO_MKDIR, EIO_RENAME,
  EIO_MKNOD, EIO_READDIR,
  EIO_LINK, EIO_SYMLINK, EIO_READLINK, EIO_REALPATH,
  EIO_GROUP, EIO_NOP,
  EIO_BUSY
};
enum
{
  EIO_MCL_CURRENT = 1,
  EIO_MCL_FUTURE  = 2
};
enum {
  EIO_PRI_MIN     = -4,
  EIO_PRI_MAX     =  4,
  EIO_PRI_DEFAULT =  0
};
typedef struct {
  eio_req *qs[(EIO_PRI_MAX - EIO_PRI_MIN + 1)], *qe[(EIO_PRI_MAX - EIO_PRI_MIN + 1)]; 
  int size;
} etp_reqq;
typedef struct {
  etp_reqq res_queue; 
  void *data;         
} eio_channel;
struct eio_req
{
  eio_req __volatile *next; 
  eio_ssize_t result;  
  off_t offs;      
  size_t size;     
  void *ptr1;      
  void *ptr2;      
  eio_tstamp nv1;  
  eio_tstamp nv2;  
  int type;        
  int int1;        
  long int2;       
  long int3;       
  int errorno;     
  eio_channel *channel; 
  unsigned char cancelled;
  unsigned char flags; 
  __signed char pri;     
  void *data;
  eio_cb finish;
  void (*destroy)(eio_req *req); 
  void (*feed)(eio_req *req);    
  
  eio_req *grp, *grp_prev, *grp_next, *grp_first; 
};
enum {
  EIO_FLAG_PTR1_FREE = 0x01, 
  EIO_FLAG_PTR2_FREE = 0x02, 
  EIO_FLAG_GROUPADD  = 0x04  
};
int eio_init (void (*want_poll)(eio_channel *), void (*done_poll)(eio_channel *));
void eio_channel_init(eio_channel *, void *data);
int eio_poll (eio_channel *channel);
void eio_set_max_poll_time (eio_tstamp nseconds);
void eio_set_max_poll_reqs (unsigned int nreqs);
void eio_set_min_parallel (unsigned int nthreads);
void eio_set_max_parallel (unsigned int nthreads);
void eio_set_max_idle     (unsigned int nthreads);
void eio_set_idle_timeout (unsigned int seconds);
unsigned int eio_nreqs    (void); 
unsigned int eio_nready   (void); 
unsigned int eio_npending (void); 
unsigned int eio_nthreads (void); 
eio_req *eio_nop       (int pri, eio_cb cb, void *data, eio_channel *channel); 
eio_req *eio_busy      (eio_tstamp delay, int pri, eio_cb cb, void *data, eio_channel *channel); 
eio_req *eio_sync      (int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_fsync     (int fd, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_fdatasync (int fd, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_syncfs    (int fd, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_msync     (void *addr, size_t length, int flags, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_mtouch    (void *addr, size_t length, int flags, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_mlock     (void *addr, size_t length, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_mlockall  (int flags, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_sync_file_range (int fd, off_t offset, size_t nbytes, unsigned int flags, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_fallocate (int fd, int mode, off_t offset, size_t len, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_close     (int fd, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_readahead (int fd, off_t offset, size_t length, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_read      (int fd, void *buf, size_t length, off_t offset, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_write     (int fd, void *buf, size_t length, off_t offset, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_fstat     (int fd, int pri, eio_cb cb, void *data, eio_channel *channel); 
eio_req *eio_fstatvfs  (int fd, int pri, eio_cb cb, void *data, eio_channel *channel); 
eio_req *eio_futime    (int fd, eio_tstamp atime, eio_tstamp mtime, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_ftruncate (int fd, off_t offset, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_fchmod    (int fd, eio_mode_t mode, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_fchown    (int fd, eio_uid_t uid, eio_gid_t gid, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_dup2      (int fd, int fd2, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_sendfile  (int out_fd, int in_fd, off_t in_offset, size_t length, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_open      (__const char *path, int flags, eio_mode_t mode, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_utime     (__const char *path, eio_tstamp atime, eio_tstamp mtime, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_truncate  (__const char *path, off_t offset, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_chown     (__const char *path, eio_uid_t uid, eio_gid_t gid, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_chmod     (__const char *path, eio_mode_t mode, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_mkdir     (__const char *path, eio_mode_t mode, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_readdir   (__const char *path, int flags, int pri, eio_cb cb, void *data, eio_channel *channel); 
eio_req *eio_rmdir     (__const char *path, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_unlink    (__const char *path, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_readlink  (__const char *path, int pri, eio_cb cb, void *data, eio_channel *channel); 
eio_req *eio_realpath  (__const char *path, int pri, eio_cb cb, void *data, eio_channel *channel); 
eio_req *eio_stat      (__const char *path, int pri, eio_cb cb, void *data, eio_channel *channel); 
eio_req *eio_lstat     (__const char *path, int pri, eio_cb cb, void *data, eio_channel *channel); 
eio_req *eio_statvfs   (__const char *path, int pri, eio_cb cb, void *data, eio_channel *channel); 
eio_req *eio_mknod     (__const char *path, eio_mode_t mode, dev_t dev, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_link      (__const char *path, __const char *new_path, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_symlink   (__const char *path, __const char *new_path, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_rename    (__const char *path, __const char *new_path, int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_custom    (void (*execute)(eio_req *), int pri, eio_cb cb, void *data, eio_channel *channel);
eio_req *eio_grp       (eio_cb cb, void *data, eio_channel *channel);
void eio_grp_feed      (eio_req *grp, void (*feed)(eio_req *req), int limit);
void eio_grp_limit     (eio_req *grp, int limit);
void eio_grp_add       (eio_req *grp, eio_req *req);
void eio_grp_cancel    (eio_req *grp); 
void eio_submit (eio_req *req);
void eio_cancel (eio_req *req);
eio_ssize_t eio_sendfile_sync (int ofd, int ifd, off_t offset, size_t count);
eio_ssize_t eio__pread        (int fd, void *buf, size_t count, off_t offset);
eio_ssize_t eio__pwrite       (int fd, void *buf, size_t count, off_t offset);
typedef __uint8_t		sa_family_t;
typedef	__darwin_socklen_t	socklen_t;
 
struct iovec {
	void *   iov_base;	
	size_t	 iov_len;	
};
 
					
struct	linger {
	int	l_onoff;		
	int	l_linger;		
};
struct so_np_extensions {
	u_int32_t	npx_flags;
	u_int32_t	npx_mask;
};
struct sockaddr {
	__uint8_t	sa_len;		
	sa_family_t	sa_family;	
	char		sa_data[14];	
};
struct sockproto {
	__uint16_t	sp_family;		
	__uint16_t	sp_protocol;		
};
struct sockaddr_storage {
	__uint8_t	ss_len;		
	sa_family_t	ss_family;	
	char			__ss_pad1[((sizeof(__int64_t)) - sizeof(__uint8_t) - sizeof(sa_family_t))];
	__int64_t	__ss_align;	
	char			__ss_pad2[(128 - sizeof(__uint8_t) - sizeof(sa_family_t) - 				((sizeof(__int64_t)) - sizeof(__uint8_t) - sizeof(sa_family_t)) - (sizeof(__int64_t)))];
};
struct msghdr {
	void		*msg_name;	
	socklen_t	msg_namelen;	
	struct		iovec *msg_iov;	
	int		msg_iovlen;	
	void		*msg_control;	
	socklen_t	msg_controllen;	
	int		msg_flags;	
};
struct cmsghdr {
	socklen_t	cmsg_len;	
	int		cmsg_level;	
	int		cmsg_type;	
};
struct sf_hdtr {
	struct iovec *headers;	
	int hdr_cnt;		
	struct iovec *trailers;	
	int trl_cnt;		
};
int	accept(int, struct sockaddr * , socklen_t * )
		__asm("_" "accept"  );
int	bind(int, __const struct sockaddr *, socklen_t) __asm("_" "bind" );
int	connect(int, __const struct sockaddr *, socklen_t) __asm("_" " connect"  );
int	getpeername(int, struct sockaddr * , socklen_t * )
		__asm("_" "getpeername" );
int	getsockname(int, struct sockaddr * , socklen_t * )
		__asm("_" "getsockname" );
int	getsockopt(int, int, int, void * , socklen_t * );
int	listen(int, int) __asm("_" "listen" );
ssize_t	recv(int, void *, size_t, int) __asm("_" "recv"  );
ssize_t	recvfrom(int, void *, size_t, int, struct sockaddr * ,
		socklen_t * ) __asm("_" "recvfrom"  );
ssize_t	recvmsg(int, struct msghdr *, int) __asm("_" "recvmsg"  );
ssize_t	send(int, __const void *, size_t, int) __asm("_" "send"  );
ssize_t	sendmsg(int, __const struct msghdr *, int) __asm("_" "sendmsg"  );
ssize_t	sendto(int, __const void *, size_t,
		int, __const struct sockaddr *, socklen_t) __asm("_" "sendto"  );
int	setsockopt(int, int, int, __const void *, socklen_t);
int	shutdown(int, int);
int	sockatmark(int) __OSX_AVAILABLE_STARTING(1050, 20000);
int	socket(int, int, int);
int	socketpair(int, int, int, int *) __asm("_" "socketpair" );
int	sendfile(int, int, off_t, off_t *, struct sf_hdtr *, int);
void	pfctlinput(int, struct sockaddr *);
typedef unsigned char         uint8_t;
typedef unsigned short       uint16_t;
typedef unsigned int         uint32_t;
typedef unsigned long long   uint64_t;
typedef int8_t           int_least8_t;
typedef int16_t         int_least16_t;
typedef int32_t         int_least32_t;
typedef int64_t         int_least64_t;
typedef uint8_t         uint_least8_t;
typedef uint16_t       uint_least16_t;
typedef uint32_t       uint_least32_t;
typedef uint64_t       uint_least64_t;
typedef int8_t            int_fast8_t;
typedef int16_t          int_fast16_t;
typedef int32_t          int_fast32_t;
typedef int64_t          int_fast64_t;
typedef uint8_t          uint_fast8_t;
typedef uint16_t        uint_fast16_t;
typedef uint32_t        uint_fast32_t;
typedef uint64_t        uint_fast64_t;
typedef long int             intmax_t;
typedef long unsigned int             uintmax_t;
   
struct in_addr {
	in_addr_t s_addr;
};
 
struct sockaddr_in {
	__uint8_t	sin_len;
	sa_family_t	sin_family;
	in_port_t	sin_port;
	struct	in_addr sin_addr;
	char		sin_zero[8];
};
struct ip_opts {
	struct	in_addr ip_dst;		
	char	ip_opts[40];		
};
struct ip_mreq {
	struct	in_addr imr_multiaddr;	
	struct	in_addr imr_interface;	
};
struct ip_mreqn {
	struct	in_addr imr_multiaddr;	
	struct	in_addr imr_address;	
	int		imr_ifindex;	
};
struct ip_mreq_source {
	struct	in_addr imr_multiaddr;	
	struct	in_addr imr_sourceaddr;	
	struct	in_addr imr_interface;	
};
struct group_req {
	uint32_t		gr_interface;	
	struct sockaddr_storage	gr_group;	
};
struct group_source_req {
	uint32_t		gsr_interface;	
	struct sockaddr_storage	gsr_group;	
	struct sockaddr_storage	gsr_source;	
};
struct __msfilterreq {
	uint32_t		 msfr_ifindex;	
	uint32_t		 msfr_fmode;	
	uint32_t		 msfr_nsrcs;	
	uint32_t		__msfr_align;	
	struct sockaddr_storage	 msfr_group;	
	struct sockaddr_storage	*msfr_srcs;
};
struct sockaddr;
int	setipv4sourcefilter(int, struct in_addr, struct in_addr, uint32_t,
	    uint32_t, struct in_addr *) __OSX_AVAILABLE_STARTING(1070, 40300);
int	getipv4sourcefilter(int, struct in_addr, struct in_addr, uint32_t *,
	    uint32_t *, struct in_addr *) __OSX_AVAILABLE_STARTING(1070, 40300);
int	setsourcefilter(int, uint32_t, struct sockaddr *, socklen_t,
	    uint32_t, uint32_t, struct sockaddr_storage *) __OSX_AVAILABLE_STARTING(1070, 40300);
int	getsourcefilter(int, uint32_t, struct sockaddr *, socklen_t,
	    uint32_t *, uint32_t *, struct sockaddr_storage *) __OSX_AVAILABLE_STARTING(1070, 40300);
struct in_pktinfo {
	unsigned int	ipi_ifindex;	
	struct in_addr	ipi_spec_dst;	
	struct in_addr	ipi_addr;	
};
struct in6_addr {
	union {
		__uint8_t   __u6_addr8[16];
		__uint16_t  __u6_addr16[8];
		__uint32_t  __u6_addr32[4];
	} __u6_addr;			
};
struct sockaddr_in6 {
	__uint8_t	sin6_len;	
	sa_family_t	sin6_family;	
	in_port_t	sin6_port;	
	__uint32_t	sin6_flowinfo;	
	struct in6_addr	sin6_addr;	
	__uint32_t	sin6_scope_id;	
};
extern __const struct in6_addr in6addr_any;
extern __const struct in6_addr in6addr_loopback;
extern __const struct in6_addr in6addr_nodelocal_allnodes;
extern __const struct in6_addr in6addr_linklocal_allnodes;
extern __const struct in6_addr in6addr_linklocal_allrouters;
extern __const struct in6_addr in6addr_linklocal_allv2routers;
				   
struct ipv6_mreq {
	struct in6_addr	ipv6mr_multiaddr;
	unsigned int	ipv6mr_interface;
};
struct in6_pktinfo {
	struct in6_addr	ipi6_addr;	
	unsigned int	ipi6_ifindex;	
};
struct ip6_mtuinfo {
	struct sockaddr_in6 ip6m_addr;	
	uint32_t ip6m_mtu;
};
struct cmsghdr;
extern int inet6_option_space(int);
extern int inet6_option_init(void *, struct cmsghdr **, int);
extern int inet6_option_append(struct cmsghdr *, __const __uint8_t *,
	int, int);
extern __uint8_t *inet6_option_alloc(struct cmsghdr *, int, int, int);
extern int inet6_option_next(__const struct cmsghdr *, __uint8_t **);
extern int inet6_option_find(__const struct cmsghdr *, __uint8_t **, int);
extern size_t inet6_rthdr_space(int, int);
extern struct cmsghdr *inet6_rthdr_init(void *, int);
extern int inet6_rthdr_add(struct cmsghdr *, __const struct in6_addr *,
		unsigned int);
extern int inet6_rthdr_lasthop(struct cmsghdr *, unsigned int);
extern int inet6_rthdr_segments(__const struct cmsghdr *);
extern struct in6_addr *inet6_rthdr_getaddr(struct cmsghdr *, int);
extern int inet6_rthdr_getflags(__const struct cmsghdr *, int);
extern int inet6_opt_init(void *, socklen_t);
extern int inet6_opt_append(void *, socklen_t, int, __uint8_t,
				 socklen_t, __uint8_t, void **);
extern int inet6_opt_finish(void *, socklen_t, int);
extern int inet6_opt_set_val(void *, int, void *, socklen_t);
extern int inet6_opt_next(void *, socklen_t, int, __uint8_t *,
			       socklen_t *, void **);
extern int inet6_opt_find(void *, socklen_t, int, __uint8_t,
			  socklen_t *, void **);
extern int inet6_opt_get_val(void *, int, void *, socklen_t);
extern socklen_t inet6_rth_space(int, int);
extern void *inet6_rth_init(void *, socklen_t, int, int);
extern int inet6_rth_add(void *, __const struct in6_addr *);
extern int inet6_rth_reverse(__const void *, void *);
extern int inet6_rth_segments(__const void *);
extern struct in6_addr *inet6_rth_getaddr(__const void *, int);
extern void addrsel_policy_init(void);
int        bindresvport(int, struct sockaddr_in *);
struct sockaddr;
int        bindresvport_sa(int, struct sockaddr *);
typedef	__uint32_t tcp_seq;
typedef __uint32_t tcp_cc;		
struct tcphdr {
	unsigned short	th_sport;	
	unsigned short	th_dport;	
	tcp_seq	th_seq;			
	tcp_seq	th_ack;			
	unsigned int	th_x2:4,	
			th_off:4;	
	unsigned char	th_flags;
	unsigned short	th_win;		
	unsigned short	th_sum;		
	unsigned short	th_urp;		
};
					
in_addr_t	 inet_addr(__const char *);
char		*inet_ntoa(struct in_addr);
__const char	*inet_ntop(int, __const void *, char *, socklen_t);
int		 inet_pton(int, __const char *, void *);
int		 ascii2addr(int, __const char *, void *);
char		*addr2ascii(int, __const void *, int, char *);
int		 inet_aton(__const char *, struct in_addr *);
in_addr_t	 inet_lnaof(struct in_addr);
struct in_addr	 inet_makeaddr(in_addr_t, in_addr_t);
in_addr_t	 inet_netof(struct in_addr);
in_addr_t	 inet_network(__const char *);
char		*inet_net_ntop(int, __const void *, int, char *, __darwin_size_t);
int		 inet_net_pton(int, __const char *, void *, __darwin_size_t);
char	 	*inet_neta(in_addr_t, char *, __darwin_size_t);
unsigned int	 inet_nsap_addr(__const char *, unsigned char *, int maxlen);
char	*inet_nsap_ntoa(int, __const unsigned char *, char *ascii);
extern int h_errno;
struct hostent {
	char	*h_name;	
	char	**h_aliases;	
	int	h_addrtype;	
	int	h_length;	
	char	**h_addr_list;	
};
struct netent {
	char		*n_name;	
	char		**n_aliases;	
	int		n_addrtype;	
	uint32_t	n_net;		
};
struct servent {
	char	*s_name;	
	char	**s_aliases;	
	int	s_port;		
	char	*s_proto;	
};
struct protoent {
	char	*p_name;	
	char	**p_aliases;	
	int	p_proto;	
};
struct addrinfo {
	int	ai_flags;	
	int	ai_family;	
	int	ai_socktype;	
	int	ai_protocol;	
	socklen_t ai_addrlen;	
	char	*ai_canonname;	
	struct	sockaddr *ai_addr;	
	struct	addrinfo *ai_next;	
};
struct rpcent {
        char    *r_name;        
        char    **r_aliases;    
        int     r_number;       
};
void		endhostent(void);
void		endnetent(void);
void		endprotoent(void);
void		endservent(void);
void		freeaddrinfo(struct addrinfo *);
__const char	*gai_strerror(int);
int		getaddrinfo(__const char * , __const char * ,
			    __const struct addrinfo * ,
			    struct addrinfo ** );
struct hostent	*gethostbyaddr(__const void *, socklen_t, int);
struct hostent	*gethostbyname(__const char *);
struct hostent	*gethostent(void);
int             getnameinfo(__const struct sockaddr * , socklen_t,
			      char * , socklen_t, char * ,
			      socklen_t, int);
struct netent	*getnetbyaddr(uint32_t, int);
struct netent	*getnetbyname(__const char *);
struct netent	*getnetent(void);
struct protoent	*getprotobyname(__const char *);
struct protoent	*getprotobynumber(int);
struct protoent	*getprotoent(void);
struct servent	*getservbyname(__const char *, __const char *);
struct servent	*getservbyport(int, __const char *);
struct servent	*getservent(void);
void		sethostent(int);
void		setnetent(int);
void		setprotoent(int);
void		setservent(int);
void		freehostent(struct hostent *);
struct hostent	*gethostbyname2(__const char *, int);
struct hostent	*getipnodebyaddr(__const void *, size_t, int, int *);
struct hostent	*getipnodebyname(__const char *, int, int, int *);
struct rpcent	*getrpcbyname(__const char *name);
struct rpcent	*getrpcbynumber(int number);
struct rpcent	*getrpcent(void);
void		setrpcent(int stayopen);
void		endrpcent(void);
void		herror(__const char *);
__const char	*hstrerror(int);
int			innetgr(__const char *, __const char *, __const char *, __const char *);
int			getnetgrent(char **, char **, char **);
void		endnetgrent(void);
void		setnetgrent(__const char *);
struct passwd {
	char	*pw_name;		
	char	*pw_passwd;		
	uid_t	pw_uid;			
	gid_t	pw_gid;			
	__darwin_time_t pw_change;		
	char	*pw_class;		
	char	*pw_gecos;		
	char	*pw_dir;		
	char	*pw_shell;		
	__darwin_time_t pw_expire;		
};
struct passwd	*getpwuid(uid_t);
struct passwd	*getpwnam(__const char *);
int		 getpwuid_r(uid_t, struct passwd *, char *, size_t, struct passwd **);
int		 getpwnam_r(__const char *, struct passwd *, char *, size_t, struct passwd **);
struct passwd	*getpwent(void);
void		 setpwent(void);
void		 endpwent(void);
typedef __darwin_uuid_t	uuid_t;
typedef __darwin_uuid_string_t	uuid_string_t;
void uuid_clear(uuid_t uu);
int uuid_compare(__const uuid_t uu1, __const uuid_t uu2);
void uuid_copy(uuid_t dst, __const uuid_t src);
void uuid_generate(uuid_t out);
void uuid_generate_random(uuid_t out);
void uuid_generate_time(uuid_t out);
int uuid_is_null(__const uuid_t uu);
int uuid_parse(__const uuid_string_t in, uuid_t uu);
void uuid_unparse(__const uuid_t uu, uuid_string_t out);
void uuid_unparse_lower(__const uuid_t uu, uuid_string_t out);
void uuid_unparse_upper(__const uuid_t uu, uuid_string_t out);
int		 setpassent(int);
char 		*user_from_uid(uid_t, int);
struct passwd	*getpwuuid(uuid_t);
int		 getpwuuid_r(uuid_t, struct passwd *, char *, size_t, struct passwd **);
typedef unsigned long	tcflag_t;
typedef unsigned char	cc_t;
typedef unsigned long	speed_t;
struct termios {
	tcflag_t	c_iflag;	
	tcflag_t	c_oflag;	
	tcflag_t	c_cflag;	
	tcflag_t	c_lflag;	
	cc_t		c_cc[20];	
	speed_t		c_ispeed;	
	speed_t		c_ospeed;	
};
speed_t	cfgetispeed(__const struct termios *);
speed_t	cfgetospeed(__const struct termios *);
int	cfsetispeed(struct termios *, speed_t);
int	cfsetospeed(struct termios *, speed_t);
int	tcgetattr(int, struct termios *);
int	tcsetattr(int, int, __const struct termios *);
int	tcdrain(int) __asm("_" "tcdrain"  );
int	tcflow(int, int);
int	tcflush(int, int);
int	tcsendbreak(int, int);
void	cfmakeraw(struct termios *);
int	cfsetspeed(struct termios *, speed_t);
				
				
				
				
				
struct winsize {
	unsigned short	ws_row;		
	unsigned short	ws_col;		
	unsigned short	ws_xpixel;	
	unsigned short	ws_ypixel;	
};
						
						
						
						
						
pid_t	tcgetsid(int);
struct sched_param { int sched_priority;  char __opaque[4]; };
extern int sched_yield(void);
extern int sched_get_priority_min(int);
extern int sched_get_priority_max(int);
struct tm {
	int	tm_sec;		
	int	tm_min;		
	int	tm_hour;	
	int	tm_mday;	
	int	tm_mon;		
	int	tm_year;	
	int	tm_wday;	
	int	tm_yday;	
	int	tm_isdst;	
	long	tm_gmtoff;	
	char	*tm_zone;	
};
extern char *tzname[];
extern int getdate_err;
extern long timezone __asm("_" "timezone" );
extern int daylight;
char *asctime(__const struct tm *);
clock_t clock(void) __asm("_" "clock" );
char *ctime(__const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(__const char *);
struct tm *gmtime(__const time_t *);
struct tm *localtime(__const time_t *);
time_t mktime(struct tm *) __asm("_" "mktime" );
size_t strftime(char * , size_t, __const char * , __const struct tm * ) __asm("_" "strftime" );
char *strptime(__const char * , __const char * , struct tm * ) __asm("_" "strptime" );
time_t time(time_t *);
void tzset(void);
char *asctime_r(__const struct tm * , char * );
char *ctime_r(__const time_t *, char *);
struct tm *gmtime_r(__const time_t * , struct tm * );
struct tm *localtime_r(__const time_t * , struct tm * );
time_t posix2time(time_t);
void tzsetwall(void);
time_t time2posix(time_t);
time_t timelocal(struct tm * __const);
time_t timegm(struct tm * __const);
int nanosleep(__const struct timespec *, struct timespec *) __asm("_" "nanosleep"  );
typedef __darwin_mach_port_t		mach_port_t;
int       pthread_atfork(void (*)(void), void (*)(void),
                      void (*)(void));
int       pthread_attr_destroy(pthread_attr_t *);
int       pthread_attr_getdetachstate(__const pthread_attr_t *,
				      int *);
int       pthread_attr_getguardsize(__const pthread_attr_t * ,
                                      size_t * );
int       pthread_attr_getinheritsched(__const pthread_attr_t * ,
				       int * );
int       pthread_attr_getschedparam(__const pthread_attr_t * ,
                                     struct sched_param * );
int       pthread_attr_getschedpolicy(__const pthread_attr_t * ,
				      int * );
int       pthread_attr_getscope(__const pthread_attr_t * , int * );
int       pthread_attr_getstack(__const pthread_attr_t * ,
                                      void ** , size_t * );
int       pthread_attr_getstackaddr(__const pthread_attr_t * ,
                                      void ** );
int       pthread_attr_getstacksize(__const pthread_attr_t * ,
                                      size_t * );
int       pthread_attr_init(pthread_attr_t *);
int       pthread_attr_setdetachstate(pthread_attr_t *,
				      int );
int       pthread_attr_setguardsize(pthread_attr_t *, size_t );
int       pthread_attr_setinheritsched(pthread_attr_t *,
				       int );
int       pthread_attr_setschedparam(pthread_attr_t * ,
                                     __const struct sched_param * );
int       pthread_attr_setschedpolicy(pthread_attr_t *,
				      int );
int       pthread_attr_setscope(pthread_attr_t *, int);
int       pthread_attr_setstack(pthread_attr_t *,
                                      void *, size_t );
int       pthread_attr_setstackaddr(pthread_attr_t *,
                                      void *);
int       pthread_attr_setstacksize(pthread_attr_t *, size_t );
int       pthread_cancel(pthread_t ) __asm("_" "pthread_cancel" );
int       pthread_cond_broadcast(pthread_cond_t *);
int       pthread_cond_destroy(pthread_cond_t *);
int       pthread_cond_init(pthread_cond_t * ,
                            __const pthread_condattr_t * ) __asm("_" "pthread_cond_init" );
int       pthread_cond_signal(pthread_cond_t *);
int       pthread_cond_timedwait(pthread_cond_t * ,
				 pthread_mutex_t * ,
				 __const struct timespec * ) __asm("_" "pthread_cond_timedwait"  );
int       pthread_cond_wait(pthread_cond_t * ,
			    pthread_mutex_t * ) __asm("_" "pthread_cond_wait"  );
int       pthread_condattr_destroy(pthread_condattr_t *);
int       pthread_condattr_init(pthread_condattr_t *);
int       pthread_condattr_getpshared(__const pthread_condattr_t * ,
			int * );
int       pthread_condattr_setpshared(pthread_condattr_t *,
			int );
int       pthread_create(pthread_t * ,
                         __const pthread_attr_t * ,
                         void *(*)(void *),
                         void * );
int       pthread_detach(pthread_t );
int       pthread_equal(pthread_t ,
			pthread_t );
void      pthread_exit(void *) __attribute__((noreturn));
int       pthread_getconcurrency(void);
int       pthread_getschedparam(pthread_t , int * , struct sched_param * );
void     *pthread_getspecific(pthread_key_t );
int       pthread_join(pthread_t , void **) __asm("_" "pthread_join"  );
int       pthread_key_create(pthread_key_t *, void (*)(void *));
int       pthread_key_delete(pthread_key_t );
int       pthread_mutex_destroy(pthread_mutex_t *);
int       pthread_mutex_getprioceiling(__const pthread_mutex_t * , int * );
int       pthread_mutex_init(pthread_mutex_t * , __const pthread_mutexattr_t * );
int       pthread_mutex_lock(pthread_mutex_t *);
int       pthread_mutex_setprioceiling(pthread_mutex_t * , int, int * );
int       pthread_mutex_trylock(pthread_mutex_t *);
int       pthread_mutex_unlock(pthread_mutex_t *);
int       pthread_mutexattr_destroy(pthread_mutexattr_t *) __asm("_" "pthread_mutexattr_destroy" );
int       pthread_mutexattr_getprioceiling(__const pthread_mutexattr_t * , int * );
int       pthread_mutexattr_getprotocol(__const pthread_mutexattr_t * , int * );
int       pthread_mutexattr_getpshared(__const pthread_mutexattr_t * , int * );
int       pthread_mutexattr_gettype(__const pthread_mutexattr_t * , int * );
int       pthread_mutexattr_init(pthread_mutexattr_t *);
int       pthread_mutexattr_setprioceiling(pthread_mutexattr_t *, int);
int       pthread_mutexattr_setprotocol(pthread_mutexattr_t *, int);
int       pthread_mutexattr_setpshared(pthread_mutexattr_t *, int );
int       pthread_mutexattr_settype(pthread_mutexattr_t *, int);
int       pthread_once(pthread_once_t *, void (*)(void));
int       pthread_rwlock_destroy(pthread_rwlock_t * ) __asm("_" "pthread_rwlock_destroy" );
int       pthread_rwlock_init(pthread_rwlock_t * , __const pthread_rwlockattr_t * ) __asm("_" "pthread_rwlock_init" );
int       pthread_rwlock_rdlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_rdlock" );
int       pthread_rwlock_tryrdlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_tryrdlock" );
int       pthread_rwlock_trywrlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_trywrlock" );
int       pthread_rwlock_wrlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_wrlock" );
int       pthread_rwlock_unlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_unlock" );
int       pthread_rwlockattr_destroy(pthread_rwlockattr_t *);
int       pthread_rwlockattr_getpshared(__const pthread_rwlockattr_t * ,
			int * );
int       pthread_rwlockattr_init(pthread_rwlockattr_t *);
int       pthread_rwlockattr_setpshared(pthread_rwlockattr_t *,
			int );
pthread_t pthread_self(void);
int       pthread_setcancelstate(int , int *) __asm("_" "pthread_setcancelstate" );
int       pthread_setcanceltype(int , int *) __asm("_" "pthread_setcanceltype" );
int       pthread_setconcurrency(int);
int       pthread_setschedparam(pthread_t ,
				int ,
                                __const struct sched_param *);
int       pthread_setspecific(pthread_key_t ,
			      __const void *);
void      pthread_testcancel(void) __asm("_" "pthread_testcancel" );
int		pthread_is_threaded_np(void);
int pthread_threadid_np(pthread_t,__uint64_t*) __OSX_AVAILABLE_STARTING(1060, 30200);
int pthread_rwlock_longrdlock_np(pthread_rwlock_t *) __OSX_AVAILABLE_STARTING(1070, 99999);
int pthread_rwlock_yieldwrlock_np(pthread_rwlock_t *) __OSX_AVAILABLE_STARTING(1070, 99999);
int pthread_rwlock_downgrade_np(pthread_rwlock_t *);
int pthread_rwlock_upgrade_np(pthread_rwlock_t *);
int pthread_rwlock_tryupgrade_np(pthread_rwlock_t *);
int pthread_rwlock_held_np(pthread_rwlock_t *);
int pthread_rwlock_rdheld_np(pthread_rwlock_t *);
int pthread_rwlock_wrheld_np(pthread_rwlock_t *);
int		pthread_getname_np(pthread_t,char*,size_t) __OSX_AVAILABLE_STARTING(1060, 30200);
int		pthread_setname_np(__const char*) __OSX_AVAILABLE_STARTING(1060, 30200);
int		pthread_main_np(void);
mach_port_t 	pthread_mach_thread_np(pthread_t);
size_t	 	pthread_get_stacksize_np(pthread_t);
void *		pthread_get_stackaddr_np(pthread_t);
int		pthread_cond_signal_thread_np(pthread_cond_t *, pthread_t);
int		pthread_cond_timedwait_relative_np(pthread_cond_t *,
				 pthread_mutex_t *,
				 __const struct timespec *);
int       pthread_create_suspended_np(pthread_t *,
                         __const pthread_attr_t *,
                         void *(*)(void *),
                         void *);
int       pthread_kill(pthread_t, int);
pthread_t pthread_from_mach_thread_np(mach_port_t) __OSX_AVAILABLE_STARTING(1050, 20000);
int       pthread_sigmask(int, __const sigset_t *, sigset_t *) __asm("_" "pthread_sigmask" );
void	  pthread_yield_np(void);
typedef struct {
  char* base;
  size_t len;
} uv_buf_t;
typedef struct stat uv_fs_stat_t;
typedef int uv_file;
typedef int uv_os_sock_t;
typedef pthread_once_t uv_once_t;
typedef pthread_t uv_thread_t;
typedef pthread_mutex_t uv_mutex_t;
typedef pthread_rwlock_t uv_rwlock_t;
typedef gid_t uv_gid_t;
typedef uid_t uv_uid_t;
typedef struct {
  void* handle;
  char* errmsg;
} uv_lib_t;
struct uv__io_s;
struct uv_loop_s;
typedef struct uv__io_s uv__io_t;
typedef void (*uv__io_cb)(struct uv_loop_s* loop, uv__io_t* handle, int events);
struct uv__io_s {
  ev_io io_watcher;
};
typedef enum {
  UV_## UNKNOWN =  -1,   UV_## OK =   0,   UV_## EOF =   1,   UV_## EADDRINFO =   2,   UV_## EACCES =   3,   UV_## EAGAIN =   4,   UV_## EADDRINUSE =   5,   UV_## EADDRNOTAVAIL =   6,   UV_## EAFNOSUPPORT =   7,   UV_## EALREADY =   8,   UV_## EBADF =   9,   UV_## EBUSY =  10,   UV_## ECONNABORTED =  11,   UV_## ECONNREFUSED =  12,   UV_## ECONNRESET =  13,   UV_## EDESTADDRREQ =  14,   UV_## EFAULT =  15,   UV_## EHOSTUNREACH =  16,   UV_## EINTR =  17,   UV_## EINVAL =  18,   UV_## EISCONN =  19,   UV_## EMFILE =  20,   UV_## EMSGSIZE =  21,   UV_## ENETDOWN =  22,   UV_## ENETUNREACH =  23,   UV_## ENFILE =  24,   UV_## ENOBUFS =  25,   UV_## ENOMEM =  26,   UV_## ENOTDIR =  27,   UV_## EISDIR =  28,   UV_## ENONET =  29,   UV_## ENOTCONN =  31,   UV_## ENOTSOCK =  32,   UV_## ENOTSUP =  33,   UV_## ENOENT =  34,   UV_## ENOSYS =  35,   UV_## EPIPE =  36,   UV_## EPROTO =  37,   UV_## EPROTONOSUPPORT =  38,   UV_## EPROTOTYPE =  39,   UV_## ETIMEDOUT =  40,   UV_## ECHARSET =  41,   UV_## EAIFAMNOSUPPORT =  42,   UV_## EAISERVICE =  44,   UV_## EAISOCKTYPE =  45,   UV_## ESHUTDOWN =  46,   UV_## EEXIST =  47,   UV_## ESRCH =  48,   UV_## ENAMETOOLONG =  49,   UV_## EPERM =  50,   UV_## ELOOP =  51,   UV_## EXDEV =  52,   UV_## ENOTEMPTY =  53,   UV_## ENOSPC =  54,   UV_## EIO =  55,   UV_## EROFS =  56,   UV_## ENODEV =  57,
  UV_MAX_ERRORS
} uv_err_code;
typedef enum {
  UV_UNKNOWN_HANDLE = 0,
  UV_##ASYNC,                UV_##CHECK,                UV_##FS_EVENT,          UV_##FS_POLL,            UV_##IDLE,                  UV_##NAMED_PIPE,            UV_##POLL,                  UV_##PREPARE,            UV_##PROCESS,            UV_##TCP,                    UV_##TIMER,                UV_##TTY,                    UV_##UDP,
  UV_ARES_TASK,
  UV_FILE,
  UV_HANDLE_TYPE_MAX
} uv_handle_type;
typedef enum {
  UV_UNKNOWN_REQ = 0,
  UV_##CONNECT,            UV_##WRITE,                UV_##SHUTDOWN,          UV_##UDP_SEND,          UV_##FS,                      UV_##WORK,                  UV_##GETADDRINFO,
  
  UV_REQ_TYPE_MAX
} uv_req_type;
typedef struct uv_loop_s uv_loop_t;
typedef struct uv_ares_task_s uv_ares_task_t;
typedef struct uv_err_s uv_err_t;
typedef struct uv_handle_s uv_handle_t;
typedef struct uv_stream_s uv_stream_t;
typedef struct uv_tcp_s uv_tcp_t;
typedef struct uv_udp_s uv_udp_t;
typedef struct uv_pipe_s uv_pipe_t;
typedef struct uv_tty_s uv_tty_t;
typedef struct uv_poll_s uv_poll_t;
typedef struct uv_timer_s uv_timer_t;
typedef struct uv_prepare_s uv_prepare_t;
typedef struct uv_check_s uv_check_t;
typedef struct uv_idle_s uv_idle_t;
typedef struct uv_async_s uv_async_t;
typedef struct uv_getaddrinfo_s uv_getaddrinfo_t;
typedef struct uv_process_s uv_process_t;
typedef struct uv_counters_s uv_counters_t;
typedef struct uv_cpu_info_s uv_cpu_info_t;
typedef struct uv_interface_address_s uv_interface_address_t;
typedef struct uv_req_s uv_req_t;
typedef struct uv_shutdown_s uv_shutdown_t;
typedef struct uv_write_s uv_write_t;
typedef struct uv_connect_s uv_connect_t;
typedef struct uv_udp_send_s uv_udp_send_t;
typedef struct uv_fs_s uv_fs_t;
typedef struct uv_fs_event_s uv_fs_event_t;
typedef struct uv_fs_poll_s uv_fs_poll_t;
typedef struct uv_work_s uv_work_t;
__attribute__((visibility("default"))) uv_loop_t* uv_loop_new(void);
__attribute__((visibility("default"))) void uv_loop_delete(uv_loop_t*);
__attribute__((visibility("default"))) uv_loop_t* uv_default_loop(void);
__attribute__((visibility("default"))) int uv_run(uv_loop_t*);
__attribute__((visibility("default"))) int uv_run_once(uv_loop_t*);
__attribute__((visibility("default"))) void uv_ref(uv_handle_t*);
__attribute__((visibility("default"))) void uv_unref(uv_handle_t*);
__attribute__((visibility("default"))) void uv_update_time(uv_loop_t*);
__attribute__((visibility("default"))) int64_t uv_now(uv_loop_t*);
typedef uv_buf_t (*uv_alloc_cb)(uv_handle_t* handle, size_t suggested_size);
typedef void (*uv_read_cb)(uv_stream_t* stream, ssize_t nread, uv_buf_t buf);
typedef void (*uv_read2_cb)(uv_pipe_t* pipe, ssize_t nread, uv_buf_t buf,
    uv_handle_type pending);
typedef void (*uv_write_cb)(uv_write_t* req, int status);
typedef void (*uv_connect_cb)(uv_connect_t* req, int status);
typedef void (*uv_shutdown_cb)(uv_shutdown_t* req, int status);
typedef void (*uv_connection_cb)(uv_stream_t* server, int status);
typedef void (*uv_close_cb)(uv_handle_t* handle);
typedef void (*uv_poll_cb)(uv_poll_t* handle, int status, int events);
typedef void (*uv_timer_cb)(uv_timer_t* handle, int status);
typedef void (*uv_async_cb)(uv_async_t* handle, int status);
typedef void (*uv_prepare_cb)(uv_prepare_t* handle, int status);
typedef void (*uv_check_cb)(uv_check_t* handle, int status);
typedef void (*uv_idle_cb)(uv_idle_t* handle, int status);
typedef void (*uv_getaddrinfo_cb)(uv_getaddrinfo_t* handle, int status,
    struct addrinfo* res);
typedef void (*uv_exit_cb)(uv_process_t*, int exit_status, int term_signal);
typedef void (*uv_fs_cb)(uv_fs_t* req);
typedef void (*uv_work_cb)(uv_work_t* req);
typedef void (*uv_after_work_cb)(uv_work_t* req);
typedef void (*uv_walk_cb)(uv_handle_t* handle, void* arg);
typedef void (*uv_fs_event_cb)(uv_fs_event_t* handle, __const char* filename,
    int events, int status);
typedef void (*uv_fs_poll_cb)(uv_fs_poll_t* handle,
                              int status,
                              __const uv_statbuf_t* prev,
                              __const uv_statbuf_t* curr);
typedef enum {
  UV_LEAVE_GROUP = 0,
  UV_JOIN_GROUP
} uv_membership;
struct uv_err_s {
  
  uv_err_code code;
  
  int sys_errno_;
};
__attribute__((visibility("default"))) uv_err_t uv_last_error(uv_loop_t*);
__attribute__((visibility("default"))) __const char* uv_strerror(uv_err_t err);
__attribute__((visibility("default"))) __const char* uv_err_name(uv_err_t err);
struct uv_req_s {
  void* data;      ngx_queue_t active_queue;         uv_req_type type;
};
__attribute__((visibility("default"))) int uv_shutdown(uv_shutdown_t* req, uv_stream_t* handle,
    uv_shutdown_cb cb);
struct uv_shutdown_s {
  void* data;      ngx_queue_t active_queue;         uv_req_type type;
  uv_stream_t* handle;
  uv_shutdown_cb cb;
  
};
struct uv_handle_s {
  uv_loop_t* loop;                                                                                                                                uv_close_cb close_cb;                                                         void* data;                                                                                                                                  uv_handle_type type;                                                                                                                           ngx_queue_t handle_queue;                                                     int flags;   uv_handle_t* next_pending;
};
__attribute__((visibility("default"))) size_t uv_handle_size(uv_handle_type type);
__attribute__((visibility("default"))) size_t uv_req_size(uv_req_type type);
__attribute__((visibility("default"))) int uv_is_active(__const uv_handle_t* handle);
__attribute__((visibility("default"))) void uv_walk(uv_loop_t* loop, uv_walk_cb walk_cb, void* arg);
__attribute__((visibility("default"))) void uv_close(uv_handle_t* handle, uv_close_cb close_cb);
__attribute__((visibility("default"))) uv_buf_t uv_buf_init(char* base, unsigned int len);
__attribute__((visibility("default"))) size_t uv_strlcpy(char* dst, __const char* src, size_t size);
__attribute__((visibility("default"))) size_t uv_strlcat(char* dst, __const char* src, size_t size);
struct uv_stream_s {
  uv_loop_t* loop;                                                                                                                                uv_close_cb close_cb;                                                         void* data;                                                                                                                                  uv_handle_type type;                                                                                                                           ngx_queue_t handle_queue;                                                     int flags;   uv_handle_t* next_pending;
  size_t write_queue_size;   uv_alloc_cb alloc_cb;   uv_read_cb read_cb;   uv_read2_cb read2_cb;      uv_connect_t *connect_req;   uv_shutdown_t *shutdown_req;   uv__io_t read_watcher;   uv__io_t write_watcher;   ngx_queue_t write_queue;   ngx_queue_t write_completed_queue;   uv_connection_cb connection_cb;   int delayed_error;   int accepted_fd;   int fd;
};
__attribute__((visibility("default"))) int uv_listen(uv_stream_t* stream, int backlog, uv_connection_cb cb);
__attribute__((visibility("default"))) int uv_accept(uv_stream_t* server, uv_stream_t* client);
__attribute__((visibility("default"))) int uv_read_start(uv_stream_t*, uv_alloc_cb alloc_cb,
    uv_read_cb read_cb);
__attribute__((visibility("default"))) int uv_read_stop(uv_stream_t*);
__attribute__((visibility("default"))) int uv_read2_start(uv_stream_t*, uv_alloc_cb alloc_cb,
    uv_read2_cb read_cb);
__attribute__((visibility("default"))) int uv_write(uv_write_t* req, uv_stream_t* handle,
    uv_buf_t bufs[], int bufcnt, uv_write_cb cb);
__attribute__((visibility("default"))) int uv_write2(uv_write_t* req, uv_stream_t* handle, uv_buf_t bufs[],
    int bufcnt, uv_stream_t* send_handle, uv_write_cb cb);
struct uv_write_s {
  void* data;      ngx_queue_t active_queue;         uv_req_type type;
  uv_write_cb cb;
  uv_stream_t* send_handle;
  uv_stream_t* handle;
  ngx_queue_t queue;   int write_index;   uv_buf_t* bufs;   int bufcnt;   int error;   uv_buf_t bufsml[(4)];
};
__attribute__((visibility("default"))) int uv_is_readable(__const uv_stream_t* handle);
__attribute__((visibility("default"))) int uv_is_writable(__const uv_stream_t* handle);
__attribute__((visibility("default"))) int uv_is_closing(__const uv_handle_t* handle);
struct uv_tcp_s {
  uv_loop_t* loop;                                                                                                                                uv_close_cb close_cb;                                                         void* data;                                                                                                                                  uv_handle_type type;                                                                                                                           ngx_queue_t handle_queue;                                                     int flags;   uv_handle_t* next_pending;
  size_t write_queue_size;   uv_alloc_cb alloc_cb;   uv_read_cb read_cb;   uv_read2_cb read2_cb;      uv_connect_t *connect_req;   uv_shutdown_t *shutdown_req;   uv__io_t read_watcher;   uv__io_t write_watcher;   ngx_queue_t write_queue;   ngx_queue_t write_completed_queue;   uv_connection_cb connection_cb;   int delayed_error;   int accepted_fd;   int fd;
  
};
__attribute__((visibility("default"))) int uv_tcp_init(uv_loop_t*, uv_tcp_t* handle);
__attribute__((visibility("default"))) int uv_tcp_nodelay(uv_tcp_t* handle, int enable);
__attribute__((visibility("default"))) int uv_tcp_keepalive(uv_tcp_t* handle, int enable,
    unsigned int delay);
__attribute__((visibility("default"))) int uv_tcp_simultaneous_accepts(uv_tcp_t* handle, int enable);
__attribute__((visibility("default"))) int uv_tcp_bind(uv_tcp_t* handle, struct sockaddr_in);
__attribute__((visibility("default"))) int uv_tcp_bind6(uv_tcp_t* handle, struct sockaddr_in6);
__attribute__((visibility("default"))) int uv_tcp_getsockname(uv_tcp_t* handle, struct sockaddr* name,
    int* namelen);
__attribute__((visibility("default"))) int uv_tcp_getpeername(uv_tcp_t* handle, struct sockaddr* name,
    int* namelen);
__attribute__((visibility("default"))) int uv_tcp_connect(uv_connect_t* req, uv_tcp_t* handle,
    struct sockaddr_in address, uv_connect_cb cb);
__attribute__((visibility("default"))) int uv_tcp_connect6(uv_connect_t* req, uv_tcp_t* handle,
    struct sockaddr_in6 address, uv_connect_cb cb);
struct uv_connect_s {
  void* data;      ngx_queue_t active_queue;         uv_req_type type;
  uv_connect_cb cb;
  uv_stream_t* handle;
  ngx_queue_t queue;
};
enum uv_udp_flags {
  
  UV_UDP_IPV6ONLY = 1,
  
  UV_UDP_PARTIAL = 2
};
typedef void (*uv_udp_send_cb)(uv_udp_send_t* req, int status);
typedef void (*uv_udp_recv_cb)(uv_udp_t* handle, ssize_t nread, uv_buf_t buf,
    struct sockaddr* addr, unsigned flags);
struct uv_udp_s {
  uv_loop_t* loop;                                                                                                                                uv_close_cb close_cb;                                                         void* data;                                                                                                                                  uv_handle_type type;                                                                                                                           ngx_queue_t handle_queue;                                                     int flags;   uv_handle_t* next_pending;
  int fd;                               uv_alloc_cb alloc_cb;                 uv_udp_recv_cb recv_cb;               uv__io_t read_watcher;                uv__io_t write_watcher;               ngx_queue_t write_queue;              ngx_queue_t write_completed_queue;
};
struct uv_udp_send_s {
  void* data;      ngx_queue_t active_queue;         uv_req_type type;
  uv_udp_t* handle;
  uv_udp_send_cb cb;
  ngx_queue_t queue;                  struct sockaddr_in6 addr;           int bufcnt;                         uv_buf_t* bufs;                     ssize_t status;                     uv_udp_send_cb send_cb;             uv_buf_t bufsml[(4)];
};
__attribute__((visibility("default"))) int uv_udp_init(uv_loop_t*, uv_udp_t* handle);
__attribute__((visibility("default"))) int uv_udp_bind(uv_udp_t* handle, struct sockaddr_in addr,
    unsigned flags);
__attribute__((visibility("default"))) int uv_udp_bind6(uv_udp_t* handle, struct sockaddr_in6 addr,
    unsigned flags);
__attribute__((visibility("default"))) int uv_udp_getsockname(uv_udp_t* handle, struct sockaddr* name,
    int* namelen);
__attribute__((visibility("default"))) int uv_udp_set_membership(uv_udp_t* handle,
    __const char* multicast_addr, __const char* interface_addr,
    uv_membership membership);
__attribute__((visibility("default"))) int uv_udp_set_multicast_loop(uv_udp_t* handle, int on);
__attribute__((visibility("default"))) int uv_udp_set_multicast_ttl(uv_udp_t* handle, int ttl);
__attribute__((visibility("default"))) int uv_udp_set_broadcast(uv_udp_t* handle, int on);
__attribute__((visibility("default"))) int uv_udp_set_ttl(uv_udp_t* handle, int ttl);
__attribute__((visibility("default"))) int uv_udp_send(uv_udp_send_t* req, uv_udp_t* handle,
    uv_buf_t bufs[], int bufcnt, struct sockaddr_in addr,
    uv_udp_send_cb send_cb);
__attribute__((visibility("default"))) int uv_udp_send6(uv_udp_send_t* req, uv_udp_t* handle,
    uv_buf_t bufs[], int bufcnt, struct sockaddr_in6 addr,
    uv_udp_send_cb send_cb);
__attribute__((visibility("default"))) int uv_udp_recv_start(uv_udp_t* handle, uv_alloc_cb alloc_cb,
    uv_udp_recv_cb recv_cb);
__attribute__((visibility("default"))) int uv_udp_recv_stop(uv_udp_t* handle);
struct uv_tty_s {
  uv_loop_t* loop;                                                                                                                                uv_close_cb close_cb;                                                         void* data;                                                                                                                                  uv_handle_type type;                                                                                                                           ngx_queue_t handle_queue;                                                     int flags;   uv_handle_t* next_pending;
  size_t write_queue_size;   uv_alloc_cb alloc_cb;   uv_read_cb read_cb;   uv_read2_cb read2_cb;      uv_connect_t *connect_req;   uv_shutdown_t *shutdown_req;   uv__io_t read_watcher;   uv__io_t write_watcher;   ngx_queue_t write_queue;   ngx_queue_t write_completed_queue;   uv_connection_cb connection_cb;   int delayed_error;   int accepted_fd;   int fd;
  struct termios orig_termios;   int mode;
};
__attribute__((visibility("default"))) int uv_tty_init(uv_loop_t*, uv_tty_t*, uv_file fd, int readable);
__attribute__((visibility("default"))) int uv_tty_set_mode(uv_tty_t*, int mode);
__attribute__((visibility("default"))) void uv_tty_reset_mode(void);
__attribute__((visibility("default"))) int uv_tty_get_winsize(uv_tty_t*, int* width, int* height);
__attribute__((visibility("default"))) uv_handle_type uv_guess_handle(uv_file file);
struct uv_pipe_s {
  uv_loop_t* loop;                                                                                                                                uv_close_cb close_cb;                                                         void* data;                                                                                                                                  uv_handle_type type;                                                                                                                           ngx_queue_t handle_queue;                                                     int flags;   uv_handle_t* next_pending;
  size_t write_queue_size;   uv_alloc_cb alloc_cb;   uv_read_cb read_cb;   uv_read2_cb read2_cb;      uv_connect_t *connect_req;   uv_shutdown_t *shutdown_req;   uv__io_t read_watcher;   uv__io_t write_watcher;   ngx_queue_t write_queue;   ngx_queue_t write_completed_queue;   uv_connection_cb connection_cb;   int delayed_error;   int accepted_fd;   int fd;
  __const char* pipe_fname;
  int ipc; 
};
__attribute__((visibility("default"))) int uv_pipe_init(uv_loop_t*, uv_pipe_t* handle, int ipc);
__attribute__((visibility("default"))) void uv_pipe_open(uv_pipe_t*, uv_file file);
__attribute__((visibility("default"))) int uv_pipe_bind(uv_pipe_t* handle, __const char* name);
__attribute__((visibility("default"))) void uv_pipe_connect(uv_connect_t* req, uv_pipe_t* handle,
    __const char* name, uv_connect_cb cb);
__attribute__((visibility("default"))) void uv_pipe_pending_instances(uv_pipe_t* handle, int count);
struct uv_poll_s {
  uv_loop_t* loop;                                                                                                                                uv_close_cb close_cb;                                                         void* data;                                                                                                                                  uv_handle_type type;                                                                                                                           ngx_queue_t handle_queue;                                                     int flags;   uv_handle_t* next_pending;
  uv_poll_cb poll_cb;
  int fd;                               uv__io_t io_watcher;
};
enum uv_poll_event {
  UV_READABLE = 1,
  UV_WRITABLE = 2
};
__attribute__((visibility("default"))) int uv_poll_init(uv_loop_t* loop, uv_poll_t* handle, int fd);
__attribute__((visibility("default"))) int uv_poll_init_socket(uv_loop_t* loop, uv_poll_t* handle,
    uv_os_sock_t socket);
__attribute__((visibility("default"))) int uv_poll_start(uv_poll_t* handle, int events, uv_poll_cb cb);
__attribute__((visibility("default"))) int uv_poll_stop(uv_poll_t* handle);
struct uv_prepare_s {
  uv_loop_t* loop;                                                                                                                                uv_close_cb close_cb;                                                         void* data;                                                                                                                                  uv_handle_type type;                                                                                                                           ngx_queue_t handle_queue;                                                     int flags;   uv_handle_t* next_pending;
  
};
__attribute__((visibility("default"))) int uv_prepare_init(uv_loop_t*, uv_prepare_t* prepare);
__attribute__((visibility("default"))) int uv_prepare_start(uv_prepare_t* prepare, uv_prepare_cb cb);
__attribute__((visibility("default"))) int uv_prepare_stop(uv_prepare_t* prepare);
struct uv_check_s {
  uv_loop_t* loop;                                                                                                                                uv_close_cb close_cb;                                                         void* data;                                                                                                                                  uv_handle_type type;                                                                                                                           ngx_queue_t handle_queue;                                                     int flags;   uv_handle_t* next_pending;
  uv_check_cb check_cb;   ngx_queue_t queue;
};
__attribute__((visibility("default"))) int uv_check_init(uv_loop_t*, uv_check_t* check);
__attribute__((visibility("default"))) int uv_check_start(uv_check_t* check, uv_check_cb cb);
__attribute__((visibility("default"))) int uv_check_stop(uv_check_t* check);
struct uv_idle_s {
  uv_loop_t* loop;                                                                                                                                uv_close_cb close_cb;                                                         void* data;                                                                                                                                  uv_handle_type type;                                                                                                                           ngx_queue_t handle_queue;                                                     int flags;   uv_handle_t* next_pending;
  uv_idle_cb idle_cb;   ngx_queue_t queue;
};
__attribute__((visibility("default"))) int uv_idle_init(uv_loop_t*, uv_idle_t* idle);
__attribute__((visibility("default"))) int uv_idle_start(uv_idle_t* idle, uv_idle_cb cb);
__attribute__((visibility("default"))) int uv_idle_stop(uv_idle_t* idle);
struct uv_async_s {
  uv_loop_t* loop;                                                                                                                                uv_close_cb close_cb;                                                         void* data;                                                                                                                                  uv_handle_type type;                                                                                                                           ngx_queue_t handle_queue;                                                     int flags;   uv_handle_t* next_pending;
  ev_async async_watcher;   uv_async_cb async_cb;
};
__attribute__((visibility("default"))) int uv_async_init(uv_loop_t*, uv_async_t* async,
    uv_async_cb async_cb);
__attribute__((visibility("default"))) int uv_async_send(uv_async_t* async);
struct uv_timer_s {
  uv_loop_t* loop;                                                                                                                                uv_close_cb close_cb;                                                         void* data;                                                                                                                                  uv_handle_type type;                                                                                                                           ngx_queue_t handle_queue;                                                     int flags;   uv_handle_t* next_pending;
  ev_timer timer_watcher;   uv_timer_cb timer_cb;
};
__attribute__((visibility("default"))) int uv_timer_init(uv_loop_t*, uv_timer_t* timer);
__attribute__((visibility("default"))) int uv_timer_start(uv_timer_t* timer, uv_timer_cb cb,
    int64_t timeout, int64_t repeat);
__attribute__((visibility("default"))) int uv_timer_stop(uv_timer_t* timer);
__attribute__((visibility("default"))) int uv_timer_again(uv_timer_t* timer);
__attribute__((visibility("default"))) void uv_timer_set_repeat(uv_timer_t* timer, int64_t repeat);
__attribute__((visibility("default"))) int64_t uv_timer_get_repeat(uv_timer_t* timer);
__attribute__((visibility("default")))  int uv_ares_init_options(uv_loop_t*,
    ares_channel *channelptr, struct ares_options *options, int optmask);
__attribute__((visibility("default"))) void uv_ares_destroy(uv_loop_t*, ares_channel channel);
struct uv_getaddrinfo_s {
  void* data;      ngx_queue_t active_queue;         uv_req_type type;
  
  uv_loop_t* loop;
  uv_getaddrinfo_cb cb;   struct addrinfo* hints;   char* hostname;   char* service;   struct addrinfo* res;   int retcode;
};
__attribute__((visibility("default"))) int uv_getaddrinfo(uv_loop_t*, uv_getaddrinfo_t* handle,
    uv_getaddrinfo_cb getaddrinfo_cb, __const char* node, __const char* service,
    __const struct addrinfo* hints);
__attribute__((visibility("default"))) void uv_freeaddrinfo(struct addrinfo* ai);
typedef enum {
  UV_IGNORE         = 0x00,
  UV_CREATE_PIPE    = 0x01,
  UV_INHERIT_FD     = 0x02,
  UV_INHERIT_STREAM = 0x04,
  
  UV_READABLE_PIPE  = 0x10,
  UV_WRITABLE_PIPE  = 0x20
} uv_stdio_flags;
typedef struct uv_stdio_container_s {
  uv_stdio_flags flags;
  union {
    uv_stream_t* stream;
    int fd;
  } data;
} uv_stdio_container_t;
typedef struct uv_process_options_s {
  uv_exit_cb exit_cb; 
  __const char* file; 
  
  char** args;
  
  char** env;
  
  char* cwd;
  
  unsigned int flags;
  
  uv_uid_t uid;
  uv_gid_t gid;
  
  int stdio_count;
  uv_stdio_container_t* stdio;
} uv_process_options_t;
enum uv_process_flags {
  
  UV_PROCESS_SETUID = (1 << 0),
  
  UV_PROCESS_SETGID = (1 << 1),
  
  UV_PROCESS_WINDOWS_VERBATIM_ARGUMENTS = (1 << 2),
  
  UV_PROCESS_DETACHED = (1 << 3)
};
struct uv_process_s {
  uv_loop_t* loop;                                                                                                                                uv_close_cb close_cb;                                                         void* data;                                                                                                                                  uv_handle_type type;                                                                                                                           ngx_queue_t handle_queue;                                                     int flags;   uv_handle_t* next_pending;
  uv_exit_cb exit_cb;
  int pid;
  ev_child child_watcher;
};
__attribute__((visibility("default"))) int uv_spawn(uv_loop_t*, uv_process_t*,
    uv_process_options_t options);
__attribute__((visibility("default"))) int uv_process_kill(uv_process_t*, int signum);
__attribute__((visibility("default"))) uv_err_t uv_kill(int pid, int signum);
struct uv_work_s {
  void* data;      ngx_queue_t active_queue;         uv_req_type type;
  uv_loop_t* loop;
  uv_work_cb work_cb;
  uv_after_work_cb after_work_cb;
  eio_req* eio;
};
__attribute__((visibility("default"))) int uv_queue_work(uv_loop_t* loop, uv_work_t* req,
    uv_work_cb work_cb, uv_after_work_cb after_work_cb);
struct uv_cpu_info_s {
  char* model;
  int speed;
  struct uv_cpu_times_s {
    uint64_t user;
    uint64_t nice;
    uint64_t sys;
    uint64_t idle;
    uint64_t irq;
  } cpu_times;
};
struct uv_interface_address_s {
  char* name;
  int is_internal;
  union {
    struct sockaddr_in address4;
    struct sockaddr_in6 address6;
  } address;
};
__attribute__((visibility("default"))) char** uv_setup_args(int argc, char** argv);
__attribute__((visibility("default"))) uv_err_t uv_get_process_title(char* buffer, size_t size);
__attribute__((visibility("default"))) uv_err_t uv_set_process_title(__const char* title);
__attribute__((visibility("default"))) uv_err_t uv_resident_set_memory(size_t* rss);
__attribute__((visibility("default"))) uv_err_t uv_uptime(double* uptime);
__attribute__((visibility("default"))) uv_err_t uv_cpu_info(uv_cpu_info_t** cpu_infos, int* count);
__attribute__((visibility("default"))) void uv_free_cpu_info(uv_cpu_info_t* cpu_infos, int count);
__attribute__((visibility("default"))) uv_err_t uv_interface_addresses(uv_interface_address_t** addresses,
  int* count);
__attribute__((visibility("default"))) void uv_free_interface_addresses(uv_interface_address_t* addresses,
  int count);
typedef enum {
  UV_FS_UNKNOWN = -1,
  UV_FS_CUSTOM,
  UV_FS_OPEN,
  UV_FS_CLOSE,
  UV_FS_READ,
  UV_FS_WRITE,
  UV_FS_SENDFILE,
  UV_FS_STAT,
  UV_FS_LSTAT,
  UV_FS_FSTAT,
  UV_FS_FTRUNCATE,
  UV_FS_UTIME,
  UV_FS_FUTIME,
  UV_FS_CHMOD,
  UV_FS_FCHMOD,
  UV_FS_FSYNC,
  UV_FS_FDATASYNC,
  UV_FS_UNLINK,
  UV_FS_RMDIR,
  UV_FS_MKDIR,
  UV_FS_RENAME,
  UV_FS_READDIR,
  UV_FS_LINK,
  UV_FS_SYMLINK,
  UV_FS_READLINK,
  UV_FS_CHOWN,
  UV_FS_FCHOWN
} uv_fs_type;
struct uv_fs_s {
  void* data;      ngx_queue_t active_queue;         uv_req_type type;
  uv_fs_type fs_type;
  uv_loop_t* loop;
  uv_fs_cb cb;
  ssize_t result;
  void* ptr;
  __const char* path;
  uv_err_code errorno;
  struct stat statbuf;   eio_req* eio;
};
__attribute__((visibility("default"))) void uv_fs_req_cleanup(uv_fs_t* req);
__attribute__((visibility("default"))) int uv_fs_close(uv_loop_t* loop, uv_fs_t* req, uv_file file,
    uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_open(uv_loop_t* loop, uv_fs_t* req, __const char* path,
    int flags, int mode, uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_read(uv_loop_t* loop, uv_fs_t* req, uv_file file,
    void* buf, size_t length, int64_t offset, uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_unlink(uv_loop_t* loop, uv_fs_t* req, __const char* path,
    uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_write(uv_loop_t* loop, uv_fs_t* req, uv_file file,
    void* buf, size_t length, int64_t offset, uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_mkdir(uv_loop_t* loop, uv_fs_t* req, __const char* path,
    int mode, uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_rmdir(uv_loop_t* loop, uv_fs_t* req, __const char* path,
    uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_readdir(uv_loop_t* loop, uv_fs_t* req,
    __const char* path, int flags, uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_stat(uv_loop_t* loop, uv_fs_t* req, __const char* path,
    uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_fstat(uv_loop_t* loop, uv_fs_t* req, uv_file file,
    uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_rename(uv_loop_t* loop, uv_fs_t* req, __const char* path,
    __const char* new_path, uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_fsync(uv_loop_t* loop, uv_fs_t* req, uv_file file,
    uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_fdatasync(uv_loop_t* loop, uv_fs_t* req, uv_file file,
    uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_ftruncate(uv_loop_t* loop, uv_fs_t* req, uv_file file,
    int64_t offset, uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_sendfile(uv_loop_t* loop, uv_fs_t* req, uv_file out_fd,
    uv_file in_fd, int64_t in_offset, size_t length, uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_chmod(uv_loop_t* loop, uv_fs_t* req, __const char* path,
    int mode, uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_utime(uv_loop_t* loop, uv_fs_t* req, __const char* path,
    double atime, double mtime, uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_futime(uv_loop_t* loop, uv_fs_t* req, uv_file file,
    double atime, double mtime, uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_lstat(uv_loop_t* loop, uv_fs_t* req, __const char* path,
    uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_link(uv_loop_t* loop, uv_fs_t* req, __const char* path,
    __const char* new_path, uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_symlink(uv_loop_t* loop, uv_fs_t* req, __const char* path,
    __const char* new_path, int flags, uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_readlink(uv_loop_t* loop, uv_fs_t* req, __const char* path,
    uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_fchmod(uv_loop_t* loop, uv_fs_t* req, uv_file file,
    int mode, uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_chown(uv_loop_t* loop, uv_fs_t* req, __const char* path,
    int uid, int gid, uv_fs_cb cb);
__attribute__((visibility("default"))) int uv_fs_fchown(uv_loop_t* loop, uv_fs_t* req, uv_file file,
    int uid, int gid, uv_fs_cb cb);
enum uv_fs_event {
  UV_RENAME = 1,
  UV_CHANGE = 2
};
struct uv_fs_event_s {
  uv_loop_t* loop;                                                                                                                                uv_close_cb close_cb;                                                         void* data;                                                                                                                                  uv_handle_type type;                                                                                                                           ngx_queue_t handle_queue;                                                     int flags;   uv_handle_t* next_pending;
  char* filename;
  ev_io event_watcher;   uv_fs_event_cb cb;   int fflags;   int fd;
};
struct uv_fs_poll_s {
  uv_loop_t* loop;                                                                                                                                uv_close_cb close_cb;                                                         void* data;                                                                                                                                  uv_handle_type type;                                                                                                                           ngx_queue_t handle_queue;                                                     int flags;   uv_handle_t* next_pending;
  
  int busy_polling; 
  unsigned int interval;
  uint64_t start_time;
  char* path;
  uv_fs_poll_cb poll_cb;
  uv_timer_t timer_handle;
  uv_fs_t* fs_req;
  uv_statbuf_t statbuf;
};
__attribute__((visibility("default"))) int uv_fs_poll_init(uv_loop_t* loop, uv_fs_poll_t* handle);
__attribute__((visibility("default"))) int uv_fs_poll_start(uv_fs_poll_t* handle,
                               uv_fs_poll_cb poll_cb,
                               __const char* path,
                               unsigned int interval);
__attribute__((visibility("default"))) int uv_fs_poll_stop(uv_fs_poll_t* handle);
__attribute__((visibility("default"))) void uv_loadavg(double avg[3]);
enum uv_fs_event_flags {
  
 UV_FS_EVENT_WATCH_ENTRY = 1,
  
  UV_FS_EVENT_STAT = 2
};
__attribute__((visibility("default"))) int uv_fs_event_init(uv_loop_t* loop, uv_fs_event_t* handle,
    __const char* filename, uv_fs_event_cb cb, int flags);
__attribute__((visibility("default"))) struct sockaddr_in uv_ip4_addr(__const char* ip, int port);
__attribute__((visibility("default"))) struct sockaddr_in6 uv_ip6_addr(__const char* ip, int port);
__attribute__((visibility("default"))) int uv_ip4_name(struct sockaddr_in* src, char* dst, size_t size);
__attribute__((visibility("default"))) int uv_ip6_name(struct sockaddr_in6* src, char* dst, size_t size);
__attribute__((visibility("default"))) int uv_exepath(char* buffer, size_t* size);
__attribute__((visibility("default"))) uv_err_t uv_cwd(char* buffer, size_t size);
__attribute__((visibility("default"))) uv_err_t uv_chdir(__const char* dir);
__attribute__((visibility("default"))) uint64_t uv_get_free_memory(void);
__attribute__((visibility("default"))) uint64_t uv_get_total_memory(void);
__attribute__((visibility("default"))) extern uint64_t uv_hrtime(void);
__attribute__((visibility("default"))) void uv_disable_stdio_inheritance(void);
__attribute__((visibility("default"))) int uv_dlopen(__const char* filename, uv_lib_t* lib);
__attribute__((visibility("default"))) void uv_dlclose(uv_lib_t* lib);
__attribute__((visibility("default"))) int uv_dlsym(uv_lib_t* lib, __const char* name, void** ptr);
__attribute__((visibility("default"))) __const char* uv_dlerror(uv_lib_t* lib);
__attribute__((visibility("default"))) int uv_mutex_init(uv_mutex_t* handle);
__attribute__((visibility("default"))) void uv_mutex_destroy(uv_mutex_t* handle);
__attribute__((visibility("default"))) void uv_mutex_lock(uv_mutex_t* handle);
__attribute__((visibility("default"))) int uv_mutex_trylock(uv_mutex_t* handle);
__attribute__((visibility("default"))) void uv_mutex_unlock(uv_mutex_t* handle);
__attribute__((visibility("default"))) int uv_rwlock_init(uv_rwlock_t* rwlock);
__attribute__((visibility("default"))) void uv_rwlock_destroy(uv_rwlock_t* rwlock);
__attribute__((visibility("default"))) void uv_rwlock_rdlock(uv_rwlock_t* rwlock);
__attribute__((visibility("default"))) int uv_rwlock_tryrdlock(uv_rwlock_t* rwlock);
__attribute__((visibility("default"))) void uv_rwlock_rdunlock(uv_rwlock_t* rwlock);
__attribute__((visibility("default"))) void uv_rwlock_wrlock(uv_rwlock_t* rwlock);
__attribute__((visibility("default"))) int uv_rwlock_trywrlock(uv_rwlock_t* rwlock);
__attribute__((visibility("default"))) void uv_rwlock_wrunlock(uv_rwlock_t* rwlock);
__attribute__((visibility("default"))) int uv_sem_init(uv_sem_t* sem, unsigned int value);
__attribute__((visibility("default"))) void uv_sem_destroy(uv_sem_t* sem);
__attribute__((visibility("default"))) void uv_sem_post(uv_sem_t* sem);
__attribute__((visibility("default"))) void uv_sem_wait(uv_sem_t* sem);
__attribute__((visibility("default"))) int uv_sem_trywait(uv_sem_t* sem);
__attribute__((visibility("default"))) void uv_once(uv_once_t* guard, void (*callback)(void));
__attribute__((visibility("default"))) int uv_thread_create(uv_thread_t *tid,
    void (*entry)(void *arg), void *arg);
__attribute__((visibility("default"))) int uv_thread_join(uv_thread_t *tid);
union uv_any_handle {
  uv_tcp_t tcp;
  uv_pipe_t pipe;
  uv_prepare_t prepare;
  uv_check_t check;
  uv_idle_t idle;
  uv_async_t async;
  uv_timer_t timer;
  uv_getaddrinfo_t getaddrinfo;
  uv_fs_event_t fs_event;
};
union uv_any_req {
  uv_req_t req;
  uv_write_t write;
  uv_connect_t connect;
  uv_shutdown_t shutdown;
  uv_fs_t fs_req;
  uv_work_t work_req;
};
struct uv_counters_s {
  uint64_t async_init;
  uint64_t check_init;
  uint64_t eio_init;
  uint64_t fs_event_init;
  uint64_t fs_poll_init;
  uint64_t handle_init;
  uint64_t idle_init;
  uint64_t pipe_init;
  uint64_t poll_init;
  uint64_t prepare_init;
  uint64_t process_init;
  uint64_t req_init;
  uint64_t stream_init;
  uint64_t tcp_init;
  uint64_t timer_init;
  uint64_t tty_init;
  uint64_t udp_init;
};
struct uv_loop_s {
  eio_channel uv_eio_channel;   struct ev_loop* ev;      uv_async_t uv_eio_want_poll_notifier;   uv_async_t uv_eio_done_poll_notifier;   uv_idle_t uv_eio_poller;   uv_handle_t* pending_handles;   ngx_queue_t prepare_handles;   ngx_queue_t check_handles;   ngx_queue_t idle_handles;   
  ares_channel channel;
  
  
  
  uv_timer_t ares_timer;   
  struct uv__ares_tasks { uv_ares_task_t* rbh_root; } ares_handles;
  
  uv_counters_t counters;
  
  uv_err_t last_err;
  
  unsigned int active_handles;
  ngx_queue_t handle_queue;
  ngx_queue_t active_reqs;
  
  void* data;
};
