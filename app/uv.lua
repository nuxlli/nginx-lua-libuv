local ffi = require( "ffi" )

ffi.cdef([[
  enum {
    O_RDONLY
  }

  typedef enum uv_handle_type {
    uv_unknown_handle,
    uv_async,
    uv_check,
    uv_fs_event,
    uv_idle,
    uv_pipe,
    uv_poll,
    uv_prepare,
    uv_process,
    uv_tcp,
    uv_timer,
    uv_tty,
    uv_udp,
    uv_ares_task,
    uv_file,
    uv_handle_type_max
  } uv_handle_type;

  typedef enum uv_req_type {
    uv_unknown_req,
    uv_connect,
    uv_write,
    uv_shutdown,
    uv_udp_send,
    uv_fs,
    uv_work,
    uv_getaddrinfo,
    uv_req_type_private,
    uv_req_type_max
  } uv_req_type;

  typedef enum uv_membership {
    uv_leave_group = 0,
    uv_join_group
  } uv_membership;

  typedef enum uv_err_code {
    UV_UKNOWN = -1,
    UV_OK,
    UV_EOF,
    UV_EADDRINFO,
    UV_EACCES,
    UV_EAGAIN,
    UV_EADDRINUSE,
    UV_EADDRNOTAVAIL,
    UV_EAFNOSUPPORT,
    UV_EALREADY,
    UV_EBADF,
    UV_EBUSY,
    UV_ECONNABORTED,
    UV_ECONNREFUSED,
    UV_ECONNRESET,
    UV_EDESTADDRREQ,
    UV_EFAULT,
    UV_EHOSTUNREACH,
    UV_EINTR,
    UV_EINVAL,
    UV_EISCONN,
    UV_EMFILE,
    UV_EMSGSIZE,
    UV_ENETDOWN,
    UV_ENETUNREACH,
    UV_ENFILE,
    UV_ENOBUFS,
    UV_ENOMEM,
    UV_ENOTDIR,
    UV_EISDIR,
    UV_ENONET,
    UV_ENOTCONN,
    UV_ENOTSOCK,
    UV_ENOTSUP,
    UV_ENOENT,
    UV_ENOSYS,
    UV_EPIPE,
    UV_EPROTO,
    UV_EPROTONOSUPPORT,
    UV_EPROTOTYPE,
    UV_ETIMEDOUT,
    UV_ECHARSET,
    UV_EAIFAMNOSUPPORT,
    UV_EAISERVICE,
    UV_EAISOCKTYPE,
    UV_ESHUTDOWN,
    UV_EEXIST,
    UV_ESRCH,
    UV_ENAMETOOLONG,
    UV_EPERM,
    UV_ELOOP,
    UV_EXDEV,
    UV_ENOTEMPTY,
    UV_ENOSPC,
    UV_EIO,
    UV_EROFS,
    UV_ENODEV,
    UV_ESPIPE,
    UV_ECANCELED,
    UV_MAX_ERRORS
  } uv_err_code;

  typedef enum uv_fs_type {
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

  typedef enum uv_fs_event {
    UV_RENAME = 1,
    UV_CHANGE = 2
  } uv_fs_event;

  typedef struct uv_buf_t {
    int blah;
  } uv_buf_t;

  typedef long ssize_t;
  typedef ssize_t  eio_ssize_t;
  typedef long long off_t;

  typedef struct ngx_queue_s  ngx_queue_t;
  struct ngx_queue_s {
      ngx_queue_t  *prev;
      ngx_queue_t  *next;
  };

  typedef struct stat uv_fs_stat_t;
  typedef struct uv_loop_s uv_loop_t;
  typedef struct uv_idle_s uv_idle_t;
  typedef struct uv_fs_s uv_fs_t;
  typedef struct uv_handle_s uv_handle_t;
  typedef struct uv_err_s uv_err_t;

  typedef struct uv_fs_event_t* uv_fs_event_t;

  typedef struct eio_req    eio_req;
  typedef struct eio_dirent eio_dirent;
  typedef double eio_tstamp;

  struct uv_err_s {
    uv_err_code code;
    int sys_errno_;
  };

  typedef struct uv_statbuf_t {
    int blah;
  } uv_statbuf_t;

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

  uv_loop_t* uv_loop_new();
  uv_loop_t* uv_default_loop();

  typedef int uv_file;

  typedef void (*uv_idle_cb)(uv_idle_t* handle, int status);
  typedef void (*uv_fs_cb)(uv_fs_t* req);
  typedef int  (*eio_cb)(eio_req *req);
  typedef void (*uv_close_cb)(uv_handle_t* handle);
  typedef void (*uv_fs_event_cb)(uv_fs_event_t* handle, __const char* filename, int events, int status);

  int uv_idle_init(uv_loop_t*, uv_idle_t* idle);
  int uv_idle_start(uv_idle_t* idle, uv_idle_cb cb);
  int uv_idle_stop(uv_idle_t* idle);

  uv_err_t uv_last_error(uv_loop_t*);
  __const char* uv_strerror(uv_err_t err);
  __const char* uv_err_name(uv_err_t err);

  void uv_fs_req_cleanup(uv_fs_t* req);
  int uv_fs_open(uv_loop_t* loop, uv_fs_t* req, __const char* path,
      int flags, int mode, uv_fs_cb cb);
  int uv_fs_read(uv_loop_t* loop, uv_fs_t* req, int file,
      void* buf, size_t length, int64_t offset, uv_fs_cb cb);
  int uv_fs_event_init(uv_loop_t* loop, uv_fs_event_t* handle,
    __const char* filename, uv_fs_event_cb cb, int flags);

  int uv_run(uv_loop_t*);

  struct uv_handle_s {
    // #define UV_HANDLE_FIELDS
    /* read-only */
    uv_loop_t* loop;
    /* public */
    uv_close_cb close_cb;
    void* data;
    /* read-only */
    uv_handle_type type;
    /* private */
    ngx_queue_t handle_queue;
    // #define UV_HANDLE_PRIVATE_FIELDS
    int flags;
    uv_handle_t* next_closing;
  };

  struct eio_req {
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

  struct uv_fs_s {
    void* data;
    ngx_queue_t active_queue;
    uv_req_type type;
    uv_fs_type fs_type;
    uv_loop_t* loop;
    uv_fs_cb cb;
    ssize_t result;
    void* ptr;
    __const__ char* path;
    uv_err_code errorno;
    uv_statbuf_t statbuf;
    eio_req* eio;
  };

  struct uv_idle_s {
    uv_loop_t* loop;
    uv_close_cb close_cb;
    void* data;
    uv_handle_type type;
    ngx_queue_t handle_queue;
    int flags; uv_handle_t* next_pending;
    uv_idle_cb idle_cb;   ngx_queue_t queue;
  };
]])

local uv = ffi.load("uv.dylib")

return {
  O_RDONLY = ffi.C.O_RDONLY,

  idle_t = ffi.typeof('uv_idle_t'),
  fs_t   = ffi.typeof('uv_fs_t'),

  default_loop = uv.uv_default_loop,
  run = uv.uv_run,

  strerror       = function(...)
    return ffi.string(uv.uv_strerror(...))
  end,
  last_error     = uv.uv_last_error,

  fs_open        = uv.uv_fs_open,
  fs_req_cleanup = uv.uv_fs_req_cleanup,
  fs_read        = uv.uv_fs_read,

  idle_init  = uv.uv_idle_init,
  idle_start = uv.uv_idle_start,
  idle_stop  = uv.uv_idle_stop,

  uv = uv,
}
