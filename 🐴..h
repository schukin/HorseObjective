//
//  🐴H..h
//  Horse Objective
//

#ifndef Horse_Objective___Header_h
#define Horse_Objective___Header_h

#define __unsafe_unretained_uncensored __strong

#if __IPHONE_OS_VERSION_MAX_ALLOWED > 70000
    #define __readmaybe __readwrite
#else
    #define __readmaybe __readonly
#endif

#endif
