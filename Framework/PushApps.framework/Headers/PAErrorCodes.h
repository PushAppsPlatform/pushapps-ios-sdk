#ifndef PAErrorCodes_h
#define PAErrorCodes_h

enum PAErrorCodes : NSUInteger {
    PAErrorOK = 0,
    PAErrorUnknownResponse = 1,
    PAErrorRequestFailed = 2,
    PAErrorUnknownException = 3
};

#define ERROR_DESCRIPTION_OK @"OK"
#define ERROR_DESCRIPTION_UNKNOWN_RESPONSE @"Unknown Response"
#define ERROR_DESCRIPTION_REQUEST_FAILED @"Unknown Response"
#define ERROR_DESCRIPTION_UNKNOWN_EXCEPTION @"Unknown Exception"

#endif /* PAErrorCodes_h */
