//
//  FKFlickrPhotosSetContentType.m
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrPhotosSetContentType.h" 

@implementation FKFlickrPhotosSetContentType



- (BOOL) needsLogin {
    return YES;
}

- (BOOL) needsSigning {
    return YES;
}

- (FKPermission) requiredPerms {
    return 1;
}

- (NSString *) name {
    return @"flickr.photos.setContentType";
}

- (BOOL) isValid:(NSError **)error {
    BOOL valid = YES;
	NSMutableString *errorDescription = [[NSMutableString alloc] initWithString:@"You are missing required params: "];
	if(!self.photo_id) {
		valid = NO;
		[errorDescription appendString:@"'photo_id', "];
	}
	if(!self.content_type) {
		valid = NO;
		[errorDescription appendString:@"'content_type', "];
	}

	if(error != NULL) {
		if(!valid) {	
			NSDictionary *userInfo = @{NSLocalizedDescriptionKey: errorDescription};
			*error = [NSError errorWithDomain:FKFlickrKitErrorDomain code:FKErrorInvalidArgs userInfo:userInfo];
		}
	}
    return valid;
}

- (NSDictionary *) args {
    NSMutableDictionary *args = [NSMutableDictionary dictionary];
	if(self.photo_id) {
		[args setValue:self.photo_id forKey:@"photo_id"];
	}
	if(self.content_type) {
		[args setValue:self.content_type forKey:@"content_type"];
	}

    return [args copy];
}

- (NSString *) descriptionForError:(NSInteger)error {
    switch(error) {
		case FKFlickrPhotosSetContentTypeError_PhotoNotFound:
			return @"Photo not found";
		case FKFlickrPhotosSetContentTypeError_RequiredArgumentsMissing:
			return @"Required arguments missing";
		case FKFlickrPhotosSetContentTypeError_ChangeNotAllowed:
			return @"Change not allowed";
		case FKFlickrPhotosSetContentTypeError_SSLIsRequired:
			return @"SSL is required";
		case FKFlickrPhotosSetContentTypeError_InvalidSignature:
			return @"Invalid signature";
		case FKFlickrPhotosSetContentTypeError_MissingSignature:
			return @"Missing signature";
		case FKFlickrPhotosSetContentTypeError_LoginFailedOrInvalidAuthToken:
			return @"Login failed / Invalid auth token";
		case FKFlickrPhotosSetContentTypeError_UserNotLoggedInOrInsufficientPermissions:
			return @"User not logged in / Insufficient permissions";
		case FKFlickrPhotosSetContentTypeError_InvalidAPIKey:
			return @"Invalid API Key";
		case FKFlickrPhotosSetContentTypeError_ServiceCurrentlyUnavailable:
			return @"Service currently unavailable";
		case FKFlickrPhotosSetContentTypeError_WriteOperationFailed:
			return @"Write operation failed";
		case FKFlickrPhotosSetContentTypeError_FormatXXXNotFound:
			return @"Format \"xxx\" not found";
		case FKFlickrPhotosSetContentTypeError_MethodXXXNotFound:
			return @"Method \"xxx\" not found";
		case FKFlickrPhotosSetContentTypeError_InvalidSOAPEnvelope:
			return @"Invalid SOAP envelope";
		case FKFlickrPhotosSetContentTypeError_InvalidXMLRPCMethodCall:
			return @"Invalid XML-RPC Method Call";
		case FKFlickrPhotosSetContentTypeError_BadURLFound:
			return @"Bad URL found";
  
		default:
			return @"Unknown error code";
    }
}

@end
