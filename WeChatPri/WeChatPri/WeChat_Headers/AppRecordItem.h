//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AppRecordItem : NSObject
{
}

+ (id)GetRecordDataDir:(id)arg1 LocalID:(unsigned int)arg2;
+ (id)GetRecordDataPathByUsername:(id)arg1 LocalID:(unsigned int)arg2 DataID:(id)arg3 DataExt:(id)arg4;
+ (id)GetRecordThumbPathByUsername:(id)arg1 LocalID:(unsigned int)arg2 DataID:(id)arg3;
+ (void)GetPathOfAppDir:(id)arg1 retStrPath:(id *)arg2;
+ (id)xmlOfStreamVideo:(id)arg1;
+ (void)parseStreamVideoNode:(struct XmlReaderNode_t *)arg1 dataField:(id)arg2;
+ (id)DataListToXML:(id)arg1;
+ (id)RecordItemToXML:(id)arg1;
+ (id)parseDataList:(struct XmlReaderNode_t *)arg1 msg:(id)arg2 dataIdSet:(id)arg3 deep:(int)arg4;
+ (id)genRecordTitleByDataList:(id)arg1;
+ (_Bool)ParserRecordXML:(id)arg1 TORecordItem:(id)arg2 msg:(id)arg3;

@end

