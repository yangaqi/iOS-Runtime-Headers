/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface CalendarModel : NSObject <CalendarEventLoaderDelegate> {
    int _cachedFakeTodayIndex;
    NSCalendar *_calendar;
    CalendarEventLoader *_eventLoader;
    EKEventStore *_eventStore;
    NSLock *_filterLock;
    unsigned int _firstVisibleSecond;
    int _invitationBearingStoresExist;
    _EKNotificationMonitor *_notificationMonitor;
    <OccurrenceCacheDataSourceProtocol> *_occurrenceCacheDataSource;
    <OccurrenceCacheDataSourceProtocol> *_occurrenceCacheFilteredDataSource;
    int _readWriteCalendarCount;
    NSString *_searchString;
    NSSet *_selectedCalendars;
    EKCalendarDate *_selectedDate;
    EKEvent *_selectedOccurrence;
    NSArray *_visibleCalendars;
}

@property (nonatomic, copy) NSCalendar *calendar;
@property (nonatomic, readonly) EKEventStore *eventStore;
@property (nonatomic) unsigned int firstVisibleSecond;
@property (nonatomic, readonly) int readWriteCalendarCount;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic, retain) NSSet *selectedCalendars;
@property (nonatomic, copy) EKCalendarDate *selectedDate;
@property (nonatomic, readonly) EKCalendarDate *selectedDay;
@property (nonatomic, retain) EKEvent *selectedOccurrence;
@property (nonatomic, readonly) int visibleCalendarCount;

- (void).cxx_destruct;
- (void)_createOccurrenceCacheDataSources;
- (id)_dataSourceUsingFilter:(BOOL)arg1;
- (void)_eventStoreChanged:(id)arg1;
- (void)_invalidateCachedOccurrences;
- (void)_invalidateOccurrenceCacheDataSources;
- (void)_localeChanged:(id)arg1;
- (void)_notificationCountExpired:(id)arg1;
- (id)_notificationMonitor;
- (void)_notificationsExpired:(id)arg1;
- (void)_occurrenceCacheChanged;
- (void)_processReloadForCacheOnly:(BOOL)arg1 includingCalendars:(BOOL)arg2 checkCalendarsValid:(BOOL)arg3;
- (void)_recreateOccurrenceCacheDataSources;
- (void)_reloadIfTodayDetermined;
- (void)_searchResultsAvailable:(id)arg1;
- (void)_significantTimeChange:(id)arg1;
- (void)_systemWake;
- (void)_timeZoneChanged:(id)arg1;
- (double)_tomorrow;
- (void)_tzSupportTodayRolledOver;
- (void)addOccurrenceAwaitingDeletion:(id)arg1;
- (void)addOccurrenceAwaitingRefresh:(id)arg1;
- (int)cachedFakeTodayIndex;
- (id)cachedOccurrenceAtIndexPath:(id)arg1;
- (id)cachedOccurrenceAtIndexPath:(id)arg1 usingFilter:(BOOL)arg2;
- (BOOL)cachedOccurrencesAreBeingGenerated;
- (BOOL)cachedOccurrencesAreLoaded;
- (id)calendar;
- (void)calendarEventLoader:(id)arg1 occurrencesDidUpdateBetweenStart:(double)arg2 end:(double)arg3;
- (id)closestOccurrenceToTomorrowForEventUID:(int)arg1;
- (id)dateForCachedOccurrencesInSection:(int)arg1;
- (id)dateForCachedOccurrencesInSection:(int)arg1 usingFilter:(BOOL)arg2;
- (void)dealloc;
- (id)defaultCalendarForNewEvents;
- (void)ensureCalendarVisibleWithId:(id)arg1;
- (id)eventNotificationReferences;
- (unsigned int)eventNotificationsCount;
- (id)eventStore;
- (void)fetchCachedDaysInBackgroundStartingFromSection:(int)arg1;
- (void)fetchCachedDaysInBackgroundStartingFromSection:(int)arg1 usingFilter:(BOOL)arg2;
- (unsigned int)firstVisibleSecond;
- (id)init;
- (BOOL)invitationBearingStoresExistForEvents;
- (BOOL)isCalendarVisibleWithID:(id)arg1;
- (int)numberOfCachedOccurrencesInSection:(int)arg1;
- (int)numberOfCachedOccurrencesInSection:(int)arg1 usingFilter:(BOOL)arg2;
- (int)numberOfDaysWithCachedOccurrences;
- (int)numberOfDaysWithCachedOccurrencesUsingFilter:(BOOL)arg1;
- (id)occurrencesForDay:(id)arg1 waitForLoad:(BOOL)arg2;
- (id)occurrencesForStartDate:(id)arg1 endDate:(id)arg2 preSorted:(BOOL)arg3 waitForLoad:(BOOL)arg4;
- (id)occurrencesForStartDay:(id)arg1 endDay:(id)arg2 preSorted:(BOOL)arg3 waitForLoad:(BOOL)arg4;
- (void)prepareForAppSuspend;
- (int)readWriteCalendarCount;
- (void)refreshAccountListIfNeeded:(BOOL)arg1;
- (void)refreshCalendarDataIfNeeded:(BOOL)arg1;
- (BOOL)removeEvent:(id)arg1 withSpan:(int)arg2 error:(id*)arg3;
- (id)searchString;
- (BOOL)searchingOccurrences;
- (int)sectionForCachedOccurrencesOnDate:(id)arg1;
- (int)sectionForCachedOccurrencesOnDate:(id)arg1 sectionExistsForDay:(BOOL*)arg2;
- (int)sectionForCachedOccurrencesOnDate:(id)arg1 sectionExistsForDay:(BOOL*)arg2 usingFilter:(BOOL)arg3;
- (int)sectionForCachedOccurrencesOnDate:(id)arg1 usingFilter:(BOOL)arg2;
- (id)selectedCalendars;
- (id)selectedDate;
- (id)selectedDateOccurrences:(BOOL)arg1 loadIsComplete:(BOOL*)arg2;
- (id)selectedDay;
- (id)selectedOccurrence;
- (BOOL)selectedOccurrenceIsSearchMatch;
- (void)setCalendar:(id)arg1;
- (void)setComponentForExpandingPadding:(unsigned int)arg1;
- (void)setComponentForExpandingRequests:(unsigned int)arg1;
- (void)setDesiredPaddingDays:(unsigned int)arg1;
- (void)setFirstVisibleSecond:(unsigned int)arg1;
- (void)setMaxCachedDays:(unsigned int)arg1;
- (void)setPreferredReloadStartDate:(id)arg1 endDate:(id)arg2;
- (void)setSearchString:(id)arg1;
- (void)setSelectedCalendars:(id)arg1;
- (void)setSelectedDate:(id)arg1;
- (void)setSelectedOccurrence:(id)arg1;
- (void)startNotificationMonitor;
- (void)updateAfterAppResume;
- (int)visibleCalendarCount;

@end
