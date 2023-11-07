constexpr const char* PROGRAM_NAME = "SC4MessageViewer v1.0.1\n";
constexpr const wchar_t* CONFIG_FILE_NAME = L"message_viewer_config.ini";

constexpr const char* DEFAULT_CONFIG_FILE_CONTENTS =
";###############################################\n\
; Configuration file for SC4MessageViewer\n\
;###############################################\n\
; Enter the message id (in hex or integer format) you want to view on right side of = sign and enter the name you want to use to refer to it on the other side.\n\
\n\
; NOTE: These entries have been taken from ngomez/simmaster07's findings\n\
; Some entries have been commented out as they fire all the time, they can be run but expect some slowdown if they are all enabled\n\
\n\
kMsgTypeToolTipTick = 0x533CCA1E\n\
kMsgMapChanged = 0x2A09B21\n\
kMsgTypeDemandChanged = 0x426840A\n\
kMsgWaterMapChanged = 0x6946DC3\n\
kMsgTransitStrikeCalledOff = 0x69247DC3\n\
kMsgTransitStrikeBegin = 0x69247DC4\n\
kMsgTransitStrikeFinished = 0x69247DC5\n\
kMsgTransitStrikeThreatened = 0x69247DC6\n\
kMsgTrafficMapChanged = 0x69247DC7\n\
kMsgRoadDamageChange = 0x69247DC8\n\
kMsgFerryDataUpdate = 0x2C06BA8\n\
kMsgMoistureMapChanged = 0x9B6D58\n\
kMsgAdviceClickedChanged = 0x426841A1\n\
kMsgTypeToolTipTick2 = 0xCA56DD7\n\
kMsgPingResult = 0x243FC6F\n\
kMessageTypeAppGainLoseFocus = 0x4348B111\n\
kMessageTypeIMEEvent = 0x5A4FC3D5\n\
kMessageType_UpdateSelf = 0xCA8F3DB6\n\
kMessageTypeDispatchBegin = 0xE94671EB\n\
kMessageTypeDispatchActive = 0xE94671EC\n\
kMessageTypeDispatchInactive = 0xE94671ED\n\
kMessageTypeDispatchEnd = 0x894671F6\n\
kMessageTypePreferencesChanged = 0x231BBF91\n\
kMessageTypeFireDisasterSeverityChange = 0x49D15B72\n\
kMessageTypeFireDisasterObjectsIgnited = 0x49D15B73\n\
kMessageTypeDisasterPeriodStarted = 0xCA1B1E64\n\
kMessageTypeDisasterPeriodEnded = 0xAA1B2002\n\
kMessageTypeDisasterPhaseChange = 0xA9C7CAB6\n\
kMessageTypeDisasterFireStarter = 0x49E3DB1D\n\
kMessageTypeFileChangeNotification = 0x87163754\n\
kMessageTypeMapChanged = 0x88EA4DFF\n\
kMessageTypeFundingPercentageChanged = 0x8DAC3E7\n\
kMessageTypeIdealMonthlyFundingChanged = 0x8DAC3E8\n\
kMessageTypeSimCycleComplete0 = 0x68F54CE0\n\
kMessageTypeStrikeBegin0 = 0x68F54CE1\n\
kMessageTypeStrikeEnd0 = 0x68F54CE2\n\
kMessageTypeSimCycleComplete1 = 0x8F415FE\n\
kMessageTypeMapChanged1 = 0x87CC75B3\n\
;kMessageType_LotDeveloperNotification = 0x4C04DE69\n\
kMessageTypeZooEscape = 0xAA667CE2\n\
kMessageTypeSimCycleComplete2 = 0xA8DAF510\n\
kMessageTypeStrikeBegin1 = 0xA8DAF511\n\
kMessageTypeStrikeEnd1 = 0xA8DAF512\n\
kMessageTypePoliceBuildingChange = 0xA949569A\n\
kMessageTypeJailbreakBegin = 0x2A614891\n\
kMessageTypeJailbreakEnd = 0x2A614892\n\
kMessageTypeStrikeBegin2 = 0xCA358F85\n\
kMessageTypeStrikeEnd2 = 0xCA358F9C\n\
kMessageTypeMapChanged2 = 0x6A07C2EE\n\
kMessageTypeSimCycleComplete3 = 0xC8EA5018\n\
kSC4MessageAdvisors_AdviceAdded = 0x8A09FA64\n\
kSC4MessageAdvisors_AdviceRemoved = 0x8A09FA65\n\
kSC4MessageAdvisors_AdviceChanged = 0x8A09FA66\n\
kSC4MessageAdvisors_AdviceRemovedAll = 0x8A09FA67\n\
kSC4MessageAdvisors_AdviceCommand = 0x8A09FA6C\n\
kSC4MessageAdvisors_AdvisorChanged = 0x8A09FA68\n\
kSC4MessageAdvisors_AdvisorRemoved = 0x8A09FA69\n\
kSC4MessageAdvisors_AdvisorAdded = 0x8A09FA6A\n\
kSC4MessageAdvisors_AdvisorRemovedAll = 0x8A09FA6B\n\
kSC4MessageAdvisors_AdviceDebugCheat_DebugShowGUID = 0xEA917750\n\
kSC4MessageAdvisors_AdviceDebugCheat_DebugRefresh = 0x8A917759\n\
kSC4MessageAdvisors_AdviceDebugCheat_DebugTrigger = 0x4A91DD6E\n\
kSC4MessageAdvisors_AdviceDebugCheat_DebugPrint = 0x4A92ECEF\n\
kSC4MessageAdvisors_BudgetWindow = 0xEA5BDFBC\n\
kSC4MessageAdvisors_Data1_BudgetWindowMainSmall = 0xCA5BDFB0\n\
kSC4MessageAdvisors_Data1_BudgetWindowMainLarge = 0x4A5BDFB8\n\
kSC4MessageAdvisors_DataMapWindow = 0x6A5BDFCD\n\
kSC4MessageAdvisors_GraphWindow = 0x6A720993\n\
kSC4MessageMySim_DebugPrintMySimsInfo = 0xB6F3E27\n\
kSC4MessageMySim_DebugPrintMySimChangeJob = 0xAB6F3E2D\n\
kSC4MessageMySim_DebugPrintMySimChangeHouse = 0x4B6F3EBF\n\
kSC4MessageMySim_DebugPrintMySimDispatch = 0xBB04126\n\
kSC4MessageMySim_FollowWithCamera = 0x8BBBD22A\n\
kSC4MessageMySims_MySimsChanged = 0xAA25827C\n\
kSC4MessageMySims_MySimMovedIn = 0xEA3ADA33\n\
kSC4MessageTutorial_EndTutorial = 0xAA3840E6\n\
kSC4MessageTypeMySimDispatchFollow = 0xEBAB04B2\n\
kSC4MessageTypeMySimDispatchActivate = 0xEBAB04F3\n\
kSC4MessageAnimationTick = 0x86AD10EE\n\
kSC4MessageAnimationTickPriority = 0x86AD10EF\n\
kSC4MessagePreAppInit = 0x28E9397A\n\
kSC4MessagePostAppInit = 0x28E9397B\n\
kSC4MessagePreAppShutdown = 0x28E9397C\n\
kSC4MessagePostAppShutdown = 0x28E9397D\n\
kSC4MessageInsertBuildingOccupant = 0x8B8B2CED\n\
kSC4MessageRemoveBuildingOccupant = 0x8B8B2CEE\n\
kSC4MessageBuildingOccupantStateChange = 0xC8DAC052\n\
kSC4MessageBuildingCompletionChange = 0x2977AE2F\n\
kSC4MessageBuildingVisualStateChange = 0x9D8E0B6\n\
kSC4MessagePreCityInit = 0x26D31EC0\n\
kSC4MessagePostCityInit = 0x26D31EC1\n\
kSC4MessagePostCityInitComplete = 0xEA8AE29A\n\
kSC4MessagePreCityShutdown = 0x26D31EC2\n\
kSC4MessagePostCityShutdown = 0x26D31EC3\n\
kSC4MessageCityEstablished = 0x26D31EC4\n\
kSC4MessageCityObliterated = 0x26D31EC5\n\
kSC4MessageCityObliterationSceneEnded = 0xEA65224E\n\
kSC4MessageCityNameChanged = 0xAB99380\n\
kSC4MessageMayorNameChanged = 0xAB99381\n\
kSC4MessagePreDemolishOccupant = 0xA6DDE60A\n\
kSC4MessagePostDemolishOccupant = 0xA6DDE60B\n\
kSC4MessagePreDemolishArea = 0xA6DDE60C\n\
kSC4MessagePostDemolishArea = 0xA6DDE60D\n\
kSC4MessagePreDemolishNetworkOccupant = 0xAA7A014D\n\
kSC4MessageHeaderFontStyleID = 0x4A809914\n\
kSC4MessageBodyFontStyleID = 0x4A809915\n\
kSC4MessagePreLoad = 0x26C63340\n\
kSC4MessageLoad = 0x26C63341\n\
kSC4MessagePostLoad = 0x26C63342\n\
kSC4MessagePreSave = 0x26C63343\n\
kSC4MessageSave = 0x26C63344\n\
kSC4MessagePostSave = 0x26C63345\n\
kSC4MessageMouseScrollBegin = 0xCAD61E00\n\
kSC4MessageMouseScrollEnd = 0xEAD61E16\n\
kSC4MessagePostAppServicesInit = 0x2B96B3EA\n\
kSC4MessagePostAppServicesInitComplete = 0xAB96B05F\n\
kSC4MessagePropExemplarDataUpdated = 0x896FDC70\n\
kSC4MessageConnectionsReady = 0x6AC284F3\n\
kSC4MessageAutomatonApprochingIntersection = 0x8A878385\n\
kSC4MessageChangeInputControl = 0x9C8B8EA\n\
kSC4MessageZoningChange = 0x7699455\n\
kSC4MessageUnilateralQuit = 0x29A89B05\n\
kSC4MessageTypeDispatchFollow = 0x49F10111\n\
kSC4MessageTypeDispatchActivate = 0xC9F1011A\n\
kSC4MessageViewAnimTick = 0x697D01EE\n\
kSC4MessageAutomataPlaySFX = 0x8A385DD8\n\
kSC4MessageAutomataStopSFX = 0xAA396960\n\
kSC4MessageCrowdReactionEvent = 0xA9E3B6E2\n\
kSC4MessageCrowdReactionResult = 0xA9E3B6E3\n\
kSC4MessageEmergencyVehicleRouteBlocked = 0xCA8DCDB4\n\
kSC4MessagePedestrianChangeState = 0x49E64801\n\
kSC4MessageAutomataCollision = 0x49E64802\n\
kSC4MessageAutomataEvent = 0x9D92FC3\n\
kSC4MessageRemoveAutomataController = 0xEA298D50\n\
kSC4MessageCitySituationActivationChange = 0xABBBCA64\n\
kSC4MessageCitySituationProgressChange = 0xAC083D7D\n\
kSC4MessageMissionEffectStarted = 0xCC0D905F\n\
kSC4MessagePlayerDriveControlCallback = 0xBB324BD\n\
kSC4MessageTornadoDead = 0xA36F1E8\n\
kSC4MessageTornadoLocation = 0xA36F1E9\n\
kSC4MessageEffectDone = 0x2A7B582D\n\
kSC4MessageEffectLocation = 0x2A7B582E\n\
;kSC4MessageCreateOccupant = 0x99EF1140\n\
;kSC4MessageDestroyOccupant = 0x99EF1141\n\
;kSC4MessageShowOccupant = 0x99EF1144\n\
;kSC4MessageChangeOccupant = 0x99EF1145\n\
;kSC4MessageInsertOccupant = 0x99EF1142\n\
;kSC4MessageRemoveOccupant = 0x99EF1143\n\
;kSC4MessageMoveOccupant = 0x99EF1146\n\
kSC4MessageDeferOccupantOperations = 0x49D968C4\n\
kSC4MessageOccupantGroupChanged = 0xEBFF18A3\n\
;kSC4MessagePropStateChange = 0xE9C86DDB\n\
kSC4MessageProgressMessage = 0x4A44667F\n\
;kSC4MessageInsertUndergroundOccupant = 0x8B87A974\n\
;kSC4MessageRemoveUndergroundOccupant = 0x8B87A975\n\
kSC4MessageTypeIngredChangesMade = 0xCA1B151C\n\
kSC4MessageGrowSmallAirport1 = 0xEA394B74\n\
kSC4MessageGrowSmallAirport2 = 0xCB3BE815\n\
kSC4MessageGrowMediumAirport1 = 0xEB3BE415\n\
kSC4MessageGrowMediumAirport2 = 0x2B3BE44A\n\
kSC4MessageGrowLargeAirport1 = 0x6B3BE6D8\n\
kSC4MessageGrowLargeAirport2 = 0xB3BE81A\n\
kSC4MessageFundsChanged = 0x772FAD4\n\
kSC4MessageBondIssued = 0xC772FADA\n\
kSC4MessageBondFinished = 0xCA3FBDCE\n\
kSC4MessageToggleBudgetDialog = 0x29222F02\n\
kSC4MessageEndGameForBudgetFailure = 0xAA5CF1E3\n\
kSC4MessageBudgetGroupChanged = 0xA3E7624\n\
kSC4MessageBudgetForOccupantChanged = 0x6A5FD3FD\n\
kSC4MessageBuildingTypesUpdated = 0xA783EBC8\n\
kSC4MessageFloraTypesUpdated = 0x87A6277F\n\
kSC4MessagePollutionAirChange = 0xFA6DD0BB\n\
kSC4MessagePollutionWaterChange = 0x5A6DD1AA\n\
kSC4MessagePollutionGarbageChange = 0xDA6DD2CB\n\
kSC4MessagePollutionRadiationChange = 0xDA6DD35D\n\
kSC4MessagePowerSupplyChange = 0x876993FF\n\
kSC4MessageSchoolStrike = 0x77ACCD0\n\
kSC4MessageHealthStrike = 0x77ACCD2\n\
kSC4MessageGrowSeaport = 0x8A394DC4\n\
kSC4MessageSeaportBadLocation = 0x4A490D33\n\
kSC4MessageCreateSeaportAdvice = 0x2A622C8\n\
kSC4MessageSimBegin = 0x66956810\n\
kSC4MessageSimEmergencyTime = 0x66956811\n\
kSC4MessageSimNewMinute = 0x66956812\n\
kSC4MessageSimNewHour = 0x66956813\n\
kSC4MessageSimNewDay = 0x66956814\n\
kSC4MessageSimNewWeek = 0x66956815\n\
kSC4MessageSimNewMonth = 0x66956816\n\
kSC4MessageSimNewYear = 0x66956817\n\
kSC4MessageSimSpecificDay = 0x66956818\n\
kSC4MessageSimSpecificTime = 0x66956819\n\
kSC4MessageSimIdle = 0x6695681A\n\
kSC4MessageSimPauseChange = 0xAA7FB7E0\n\
kSC4MessageSimHiddenPauseChange = 0x4A7FB7E2\n\
kSC4MessageSimEmergencyPauseChange = 0x4A7FB807\n\
kSC4MessageSimSpeedChange = 0x4A7FB7E9\n\
kSC4MessageSeasonChange = 0x6716A4E5\n\
kSC4MessageWeatherCycleCompleted = 0x6716A4E6\n\
;kSC4MessageRedisplayTerrain = 0x870BC918\n\
kSC4MessageTerrainDoErosion = 0x470BD214\n\
kSC4MessageToggleTerrainGridDisplay = 0x277A9364\n\
kSC4MessageLongTerrainOperationBegin = 0xEA3B0AF1\n\
kSC4MessageLongTerrainOperationEnd = 0x6A3B0AFD\n\
kSC4MessageSeaLevelChanged = 0x89171496\n\
kSC4MessageTerrainTypeChanged = 0xC922EB91\n\
kSC4MessageTerrainReconcilation = 0xCA63D517\n\
kSC4MessageWaterSurfaceStateChanged = 0x6AB97795\n\
kSC4MessageAdviseList_RemoveCommand = 0xCA09FA6C\n\
kSC4MessagePreRegionInit = 0xABB5BB44\n\
kSC4MessagePostRegionInit = 0xCBB5BB45\n\
kSC4MessagePreRegionShutdown = 0x8BB5BB46\n\
kSC4MessagePostRegionShutdown = 0x8BB5BB4B\n\
;kSC4MessageCameraUpdated = 0x4A9F2FFE\n\
kSC4MessageMultipleViewChangeBegin = 0x4AB04CBE\n\
kSC4MessageMultipleViewChangeEnd = 0x4AB04CBF\n\
;kSC4MessageViewZRChange1 = 0xA6B79600\n\
;kSC4MessageViewZRChange2 = 0xA6B79601\n\
;kSC4MessageViewZRChange3 = 0xA6B79602\n\
;kSC4MessageViewTChange1 = 0xA6B79610\n\
;kSC4MessageViewTChange2 = 0xA6B79611\n\
;kSC4MessageViewTChange3 = 0xA6B79612\n\
kSC4MessagePostViewInit = 0xA6B79620\n\
kSC4MessagePostViewRefresh = 0xA6B79621\n\
kSC4MessagePreViewShutdown = 0xA6B79622\n\
kSC4MessagePreViewFilterChange = 0x6CDB65A\n\
kSC4MessagePostViewFilterChange = 0x6CDB65B\n\
kSC4MessagePreViewLevelChange = 0xC6CDBF1A\n\
kSC4MessagePostViewLevelChange = 0xC6CDBF1B\n\
kSC4MessageOccupantHighlightChange = 0xE6E85114\n\
kSC4MessageOrdinanceAvailable = 0xA2D1C5B9\n\
kSC4MessageOrdinanceUpdated = 0xC2C09554\n\
;kCanvasMessageType = 0x1A10630A\n\
;kMouseMessageType = 0xFA0C6390\n\
kMySimMessageTypeUpdate = 0x4BC42C48\n\
kNotificationMessageTypeID = 0x2BA06B99\n\
kSelfMessageType = 0x4C05A5E6\n\
kRefreshMessageType = 0x8A8AD2B\n\
kInternalMessageTypeScrolling = 0xFE342D2A\n\
kDialupMessageTypeContacted = 0x65783920\n\
kDialupMessageTypeCompleted = 0x65783921\n\
kSndEventMsgTypeStd = 0xDB53383B\n\
kMessageGameInIdleState = 0xBA44EB51\n\
;kAdvisorSystemTicker_MessageType = 0xCA5501F2\n\
kMessageSetRadioStation = 0x2A3AD653\n\
kMessageSetSimSpeed = 0xEC320E96\n\
;kMessageListenerPosChanged = 0x8A4A69C7\n\
kSC4MsgConstructionRoadCrewStart = 0x89F10866\n\
kSC4MessageNetworkOccupantUsableChange = 0x89D3E9F3\n\
kSC4MessageShowSituationPopup = 0xEBB67EF7\n\
kSGLMessage_RestoreTextures = 0x8ACAA95F\n\
kMessageConditionChanged = 0xE99B3D4D\n\
kMessageStateChanged = 0xE8BDA2E7\n\
kMessageTypeSelfTick = 0xCC327B60\n\
kMessageTractPowerChanged = 0x8A07AE00";