//
//  🐴H..h
//  Horse Objective
//

#ifndef Horse_Objective___Header_h
#define Horse_Objective___Header_h

/**
  Let people know we're serious.
  */
#define __unsafe_unretained_uncensored __strong

/**
  Things are all buttersmooth today?
  Introduce some fun into your project by
  blowing up in the future.
  */
#if __IPHONE_OS_VERSION_MAX_ALLOWED > 80000
    #define __readmaybe __readwrite
#else
    #define __readmaybe __readonly
#endif

/**
  Just switched to ARC? Good news! You can
  still do all the performSelectoring your heart desires!
  */
#define LOLSuppressPerformSelectorLeakWarning(Stuff) \
    do { \
        _Pragma("clang diagnostic push") \
        _Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
        Stuff; \
        _Pragma("clang diagnostic pop") \
    } while (0)

#endif

/** lawl */
typedef NSDictionary NSThesaurus;