//
//  FKFlickrTagsGetListUser.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrTagsGetListUserError_UserNotFound = 1,		 /* The user NSID passed was not a valid user NSID and the calling user was not logged in.
 */
	FKFlickrTagsGetListUserError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrTagsGetListUserError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrTagsGetListUserError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrTagsGetListUserError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrTagsGetListUserError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrTagsGetListUserError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrTagsGetListUserError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrTagsGetListUserError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrTagsGetListUserError;

/*

Get the tag list for a given user (or the currently logged in user).


Response:

<who id="12037949754@N01">
	<tags>
		<tag>gull</tag> 
		<tag>tag1</tag> 
		<tag>tag2</tag> 
		<tag>tags</tag> 
		<tag>test</tag> 
	</tags>
</who>

*/
@interface FKFlickrTagsGetListUser : NSObject <FKFlickrAPIMethod>

/* The NSID of the user to fetch the tag list for. If this argument is not specified, the currently logged in user (if any) is assumed. */
@property (nonatomic, copy) NSString *user_id;


@end
