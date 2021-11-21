//
//  PlaylistContextMenu.h
//  deadbeef
//
//  Created by Alexey Yakovenko on 21/11/2021.
//  Copyright © 2021 Alexey Yakovenko. All rights reserved.
//

#import <Cocoa/Cocoa.h>

NS_ASSUME_NONNULL_BEGIN

@protocol RenamePlaylistViewControllerDelegate;

@interface PlaylistContextMenu : NSMenu

@property (nonatomic,weak) id<RenamePlaylistViewControllerDelegate> renamePlaylistDelegate;
@property (nonatomic,weak) NSView *parentView;
@property (nonatomic) NSPoint clickPoint;

- (void)updateWithPlaylistIndex:(int)playlistIndex;

@end

NS_ASSUME_NONNULL_END
