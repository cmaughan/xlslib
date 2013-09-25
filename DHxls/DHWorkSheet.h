//
//  DHWorkSheet.h
//  DHxls
//
//  Created by David Hoerl on 10/7/08.
//  Copyright 2008-2013 David Hoerl. All rights reserved.
//

#if defined(NSRect)
#define DHRECT NSRect
#else
#define DHRECT CGRect
#endif

@class DHRange;
@class DHCell;
@class DHExtendedFormat;
@class DHNumberFormat;

@interface DHWorkSheet : NSObject

-(instancetype)initWithWorkSheet:(void *)ws;	// worksheet *

-(void)makeActive;

-(DHCell *)cell:(uint32_t)row col:(uint32_t)col;
-(DHCell *)blank:(id)dontCare row:(uint32_t)row col:(uint32_t)col;
-(DHCell *)blank:(id)dontCare row:(uint32_t)row col:(uint32_t)col format:(DHExtendedFormat *)extFormat;	// NULL format OK

-(DHCell *)cLabel:(char *)lbl row:(uint32_t)row col:(uint32_t)col;
-(DHCell *)cLabel:(char *)lbl row:(uint32_t)row col:(uint32_t)col format:(DHExtendedFormat *)extFormat;	// NULL format OK

-(DHCell *)label:(NSString *)lbl row:(uint32_t)row col:(uint32_t)col;
-(DHCell *)label:(NSString *)lbl row:(uint32_t)row col:(uint32_t)col format:(DHExtendedFormat *)extFormat;	// NULL format OK

-(DHCell *)number:(double)dbl row:(uint32_t)row col:(uint32_t)col;
-(DHCell *)number:(double)dbl row:(uint32_t)row col:(uint32_t)col numberFormat:(int)numFormat;			// Deprecated
-(DHCell *)number:(double)dbl row:(uint32_t)row col:(uint32_t)col format:(DHExtendedFormat *)extFormat;	// NULL format OK

-(void)height:(uint32_t)row row:(uint32_t)row format:(DHExtendedFormat *)extFormat;	// NULL format OK
-(void)width:(uint32_t)col col:(uint32_t)col format:(DHExtendedFormat *)extFormat;	// NULL format OK

-(void)merge:(DHRECT)range;

//-(DHRange *)rangegroup:(NSRect)range;

@end
