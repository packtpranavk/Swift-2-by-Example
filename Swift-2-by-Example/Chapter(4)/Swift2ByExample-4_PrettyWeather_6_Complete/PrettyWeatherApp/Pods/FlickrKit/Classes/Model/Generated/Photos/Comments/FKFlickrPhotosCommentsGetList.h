//
//  FKFlickrPhotosCommentsGetList.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrPhotosCommentsGetListError_PhotoNotFound = 1,		 /* The photo id was either invalid or was for a photo not viewable by the calling user. */
	FKFlickrPhotosCommentsGetListError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosCommentsGetListError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosCommentsGetListError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPhotosCommentsGetListError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosCommentsGetListError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosCommentsGetListError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosCommentsGetListError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosCommentsGetListError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrPhotosCommentsGetListError;

/*

Returns the comments for a photo


Response:

<comments photo_id="109722179">
        <comment id="6065-109722179-72057594077818641"
         author="35468159852@N01" authorname="Rev Dan Catt" datecreate="1141841470"
         permalink="http://www.flickr.com/photos/straup/109722179/#comment72057594077818641"
         >Umm, I'm not sure, can I get back to you on that one?</comment>
</comments>

*/
@interface FKFlickrPhotosCommentsGetList : NSObject <FKFlickrAPIMethod>

/* The id of the photo to fetch comments for. */
@property (nonatomic, copy) NSString *photo_id; /* (Required) */

/* Minimum date that a a comment was added. The date should be in the form of a unix timestamp. */
@property (nonatomic, copy) NSString *min_comment_date;

/* Maximum date that a comment was added. The date should be in the form of a unix timestamp. */
@property (nonatomic, copy) NSString *max_comment_date;


@end
