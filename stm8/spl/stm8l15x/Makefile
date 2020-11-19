SDCC=sdcc
SDAR=sdar


CFLAGS=\
  -DSTM8L05X_LD_VL \
  -DUSE_STDPERIPH_DRIVER \
  --debug \
  --Werror \
  --std-c11 \
  --opt-code-size

OBJECTS=\
	obj/ADC__DeInit.rel \
	obj/ADC__Init.rel \
	obj/ADC__Cmd.rel \
	obj/ADC__SoftwareStartConv.rel \
	obj/ADC__ExternalTrigConfig.rel \
	obj/ADC__AnalogWatchdogChannelSelect.rel \
	obj/ADC__AnalogWatchdogThresholdsConfig.rel \
	obj/ADC__AnalogWatchdogConfig.rel \
	obj/ADC__TempSensorCmd.rel \
	obj/ADC__VrefintCmd.rel \
	obj/ADC__ChannelCmd.rel \
	obj/ADC__SamplingTimeConfig.rel \
	obj/ADC__SchmittTriggerConfig.rel \
	obj/ADC__GetConversionValue.rel \
	obj/ADC__DMACmd.rel \
	obj/ADC__ITConfig.rel \
	obj/ADC__GetFlagStatus.rel \
	obj/ADC__ClearFlag.rel \
	obj/ADC__GetITStatus.rel \
	obj/ADC__ClearITPendingBit.rel \
	obj/AES__DeInit.rel \
	obj/AES__OperationModeConfig.rel \
	obj/AES__Cmd.rel \
	obj/AES__WriteSubData.rel \
	obj/AES__WriteSubKey.rel \
	obj/AES__ReadSubData.rel \
	obj/AES__ReadSubKey.rel \
	obj/AES__DMAConfig.rel \
	obj/AES__ITConfig.rel \
	obj/AES__GetFlagStatus.rel \
	obj/AES__ClearFlag.rel \
	obj/AES__GetITStatus.rel \
	obj/AES__ClearITPendingBit.rel \
	obj/BEEP__DeInit.rel \
	obj/BEEP__Init.rel \
	obj/BEEP__Cmd.rel \
	obj/BEEP__LSClockToTIMConnectCmd.rel \
	obj/BEEP__LSICalibrationConfig.rel \
	obj/CLK__Const.rel \
	obj/CLK__DeInit.rel \
	obj/CLK__HSICmd.rel \
	obj/CLK__LSICmd.rel \
	obj/CLK__HSEConfig.rel \
	obj/CLK__LSEConfig.rel \
	obj/CLK__ClockSecuritySystemEnable.rel \
	obj/CLK__ClockSecuritySytemDeglitchCmd.rel \
	obj/CLK__CCOConfig.rel \
	obj/CLK__SYSCLKSourceConfig.rel \
	obj/CLK__GetSYSCLKSource.rel \
	obj/CLK__GetClockFreq.rel \
	obj/CLK__SYSCLKDivConfig.rel \
	obj/CLK__SYSCLKSourceSwitchCmd.rel \
	obj/CLK__RTCClockConfig.rel \
	obj/CLK__BEEPClockConfig.rel \
	obj/CLK__PeripheralClockConfig.rel \
	obj/CLK__LSEClockSecuritySystemEnable.rel \
	obj/CLK__RTCCLKSwitchOnLSEFailureEnable.rel \
	obj/CLK__HaltConfig.rel \
	obj/CLK__MainRegulatorCmd.rel \
	obj/CLK__ITConfig.rel \
	obj/CLK__GetFlagStatus.rel \
	obj/CLK__ClearFlag.rel \
	obj/CLK__GetITStatus.rel \
	obj/CLK__ClearITPendingBit.rel \
	obj/COMP__DeInit.rel \
	obj/COMP__Init.rel \
	obj/COMP__VrefintToCOMP1Connect.rel \
	obj/COMP__EdgeConfig.rel \
	obj/COMP__GetOutputLevel.rel \
	obj/COMP__WindowCmd.rel \
	obj/COMP__VrefintOutputCmd.rel \
	obj/COMP__SchmittTriggerCmd.rel \
	obj/COMP__TriggerConfig.rel \
	obj/COMP__ITConfig.rel \
	obj/COMP__GetFlagStatus.rel \
	obj/COMP__ClearFlag.rel \
	obj/COMP__GetITStatus.rel \
	obj/COMP__ClearITPendingBit.rel \
	obj/DAC__DeInit.rel \
	obj/DAC__Init.rel \
	obj/DAC__Cmd.rel \
	obj/DAC__SoftwareTriggerCmd.rel \
	obj/DAC__DualSoftwareTriggerCmd.rel \
	obj/DAC__WaveGenerationCmd.rel \
	obj/DAC__SetNoiseWaveLFSR.rel \
	obj/DAC__SetTriangleWaveAmplitude.rel \
	obj/DAC__SetChannel1Data.rel \
	obj/DAC__SetChannel2Data.rel \
	obj/DAC__SetDualChannelData.rel \
	obj/DAC__GetDataOutputValue.rel \
	obj/DAC__DMACmd.rel \
	obj/DAC__ITConfig.rel \
	obj/DAC__GetFlagStatus.rel \
	obj/DAC__ClearFlag.rel \
	obj/DAC__GetITStatus.rel \
	obj/DAC__ClearITPendingBit.rel \
	obj/DMA__GlobalDeInit.rel \
	obj/DMA__DeInit.rel \
	obj/DMA__Init.rel \
	obj/DMA__GlobalCmd.rel \
	obj/DMA__Cmd.rel \
	obj/DMA__SetTimeOut.rel \
	obj/DMA__SetCurrDataCounter.rel \
	obj/DMA__GetCurrDataCounter.rel \
	obj/DMA__ITConfig.rel \
	obj/DMA__GetFlagStatus.rel \
	obj/DMA__ClearFlag.rel \
	obj/DMA__GetITStatus.rel \
	obj/DMA__ClearITPendingBit.rel \
	obj/EXTI__DeInit.rel \
	obj/EXTI__SetPinSensitivity.rel \
	obj/EXTI__SelectPort.rel \
	obj/EXTI__SetHalfPortSelection.rel \
	obj/EXTI__SetPortSensitivity.rel \
	obj/EXTI__GetPinSensitivity.rel \
	obj/EXTI__GetPortSensitivity.rel \
	obj/EXTI__GetITStatus.rel \
	obj/EXTI__ClearITPendingBit.rel \
	obj/FLASH__SetProgrammingTime.rel \
	obj/FLASH__GetProgrammingTime.rel \
	obj/FLASH__PowerWaitModeConfig.rel \
	obj/FLASH__DeInit.rel \
	obj/FLASH__Unlock.rel \
	obj/FLASH__Lock.rel \
	obj/FLASH__ProgramByte.rel \
	obj/FLASH__EraseByte.rel \
	obj/FLASH__ProgramWord.rel \
	obj/FLASH__ReadByte.rel \
	obj/FLASH__ProgramOptionByte.rel \
	obj/FLASH__EraseOptionByte.rel \
	obj/FLASH__GetReadOutProtectionStatus.rel \
	obj/FLASH__GetBootSize.rel \
	obj/FLASH__GetCodeSize.rel \
	obj/FLASH__ITConfig.rel \
	obj/FLASH__GetFlagStatus.rel \
	obj/FLASH__PowerRunModeConfig.rel \
	obj/FLASH__GetPowerStatus.rel \
	obj/FLASH__ProgramBlock.rel \
	obj/FLASH__EraseBlock.rel \
	obj/FLASH__WaitForLastOperation.rel \
	obj/GPIO__DeInit.rel \
	obj/GPIO__Init.rel \
	obj/GPIO__ExternalPullUpConfig.rel \
	obj/GPIO__Write.rel \
	obj/GPIO__WriteBit.rel \
	obj/GPIO__SetBits.rel \
	obj/GPIO__ResetBits.rel \
	obj/GPIO__ToggleBits.rel \
	obj/GPIO__ReadInputData.rel \
	obj/GPIO__ReadOutputData.rel \
	obj/GPIO__ReadInputDataBit.rel \
	obj/GPIO__ReadOutputDataBit.rel \
	obj/I2C__DeInit.rel \
	obj/I2C__Init.rel \
	obj/I2C__Cmd.rel \
	obj/I2C__GeneralCallCmd.rel \
	obj/I2C__GenerateSTART.rel \
	obj/I2C__GenerateSTOP.rel \
	obj/I2C__SoftwareResetCmd.rel \
	obj/I2C__StretchClockCmd.rel \
	obj/I2C__ARPCmd.rel \
	obj/I2C__AcknowledgeConfig.rel \
	obj/I2C__OwnAddress2Config.rel \
	obj/I2C__DualAddressCmd.rel \
	obj/I2C__AckPositionConfig.rel \
	obj/I2C__SMBusAlertConfig.rel \
	obj/I2C__FastModeDutyCycleConfig.rel \
	obj/I2C__Send7bitAddress.rel \
	obj/I2C__SendData.rel \
	obj/I2C__ReceiveData.rel \
	obj/I2C__TransmitPEC.rel \
	obj/I2C__CalculatePEC.rel \
	obj/I2C__PECPositionConfig.rel \
	obj/I2C__GetPEC.rel \
	obj/I2C__DMACmd.rel \
	obj/I2C__DMALastTransferCmd.rel \
	obj/I2C__ITConfig.rel \
	obj/I2C__ReadRegister.rel \
	obj/I2C__CheckEvent.rel \
	obj/I2C__GetLastEvent.rel \
	obj/I2C__GetFlagStatus.rel \
	obj/I2C__ClearFlag.rel \
	obj/I2C__GetITStatus.rel \
	obj/I2C__ClearITPendingBit.rel \
	obj/IRTIM__DeInit.rel \
	obj/IRTIM__Cmd.rel \
	obj/IRTIM__HighSinkODCmd.rel \
	obj/IRTIM__GetStatus.rel \
	obj/IRTIM__GetHighSinkODStatus.rel \
	obj/ITC__GetCPUCC.rel \
	obj/ITC__DeInit.rel \
	obj/ITC__GetSoftIntStatus.rel \
	obj/ITC__GetSoftwarePriority.rel \
	obj/ITC__SetSoftwarePriority.rel \
	obj/IWDG__WriteAccessCmd.rel \
	obj/IWDG__SetPrescaler.rel \
	obj/IWDG__SetReload.rel \
	obj/IWDG__ReloadCounter.rel \
	obj/IWDG__Enable.rel \
	obj/LCD__DeInit.rel \
	obj/LCD__Init.rel \
	obj/LCD__PortMaskConfig.rel \
	obj/LCD__Cmd.rel \
	obj/LCD__HighDriveCmd.rel \
	obj/LCD__PulseOnDurationConfig.rel \
	obj/LCD__DeadTimeConfig.rel \
	obj/LCD__BlinkConfig.rel \
	obj/LCD__ContrastConfig.rel \
	obj/LCD__WriteRAM.rel \
	obj/LCD__PageSelect.rel \
	obj/LCD__ITConfig.rel \
	obj/LCD__GetFlagStatus.rel \
	obj/LCD__ClearFlag.rel \
	obj/LCD__GetITStatus.rel \
	obj/LCD__ClearITPendingBit.rel \
	obj/PWR__DeInit.rel \
	obj/PWR__PVDLevelConfig.rel \
	obj/PWR__PVDCmd.rel \
	obj/PWR__FastWakeUpCmd.rel \
	obj/PWR__UltraLowPowerCmd.rel \
	obj/PWR__PVDITConfig.rel \
	obj/PWR__GetFlagStatus.rel \
	obj/PWR__PVDClearFlag.rel \
	obj/PWR__PVDGetITStatus.rel \
	obj/PWR__PVDClearITPendingBit.rel \
	obj/RST__GetFlagStatus.rel \
	obj/RST__ClearFlag.rel \
	obj/RST__GPOutputEnable.rel \
	obj/RTC__DeInit.rel \
	obj/RTC__Init.rel \
	obj/RTC__StructInit.rel \
	obj/RTC__WriteProtectionCmd.rel \
	obj/RTC__EnterInitMode.rel \
	obj/RTC__ExitInitMode.rel \
	obj/RTC__WaitForSynchro.rel \
	obj/RTC__RatioCmd.rel \
	obj/RTC__BypassShadowCmd.rel \
	obj/RTC__SetTime.rel \
	obj/RTC__TimeStructInit.rel \
	obj/RTC__GetTime.rel \
	obj/RTC__GetSubSecond.rel \
	obj/RTC__SetDate.rel \
	obj/RTC__DateStructInit.rel \
	obj/RTC__GetDate.rel \
	obj/RTC__SetAlarm.rel \
	obj/RTC__AlarmStructInit.rel \
	obj/RTC__GetAlarm.rel \
	obj/RTC__AlarmCmd.rel \
	obj/RTC__AlarmSubSecondConfig.rel \
	obj/RTC__WakeUpClockConfig.rel \
	obj/RTC__SetWakeUpCounter.rel \
	obj/RTC__GetWakeUpCounter.rel \
	obj/RTC__WakeUpCmd.rel \
	obj/RTC__DayLightSavingConfig.rel \
	obj/RTC__GetStoreOperation.rel \
	obj/RTC__OutputConfig.rel \
	obj/RTC__SynchroShiftConfig.rel \
	obj/RTC__SmoothCalibConfig.rel \
	obj/RTC__CalibOutputConfig.rel \
	obj/RTC__CalibOutputCmd.rel \
	obj/RTC__TamperLevelConfig.rel \
	obj/RTC__TamperFilterConfig.rel \
	obj/RTC__TamperSamplingFreqConfig.rel \
	obj/RTC__TamperPinsPrechargeDuration.rel \
	obj/RTC__TamperCmd.rel \
	obj/RTC__ITConfig.rel \
	obj/RTC__GetFlagStatus.rel \
	obj/RTC__ClearFlag.rel \
	obj/RTC__GetITStatus.rel \
	obj/RTC__ClearITPendingBit.rel \
	obj/RTC__ByteToBcd2.rel \
	obj/RTC__Bcd2ToByte.rel \
	obj/SPI__DeInit.rel \
	obj/SPI__Init.rel \
	obj/SPI__Cmd.rel \
	obj/SPI__NSSInternalSoftwareCmd.rel \
	obj/SPI__BiDirectionalLineConfig.rel \
	obj/SPI__SendData.rel \
	obj/SPI__ReceiveData.rel \
	obj/SPI__TransmitCRC.rel \
	obj/SPI__CalculateCRCCmd.rel \
	obj/SPI__GetCRC.rel \
	obj/SPI__ResetCRC.rel \
	obj/SPI__GetCRCPolynomial.rel \
	obj/SPI__DMACmd.rel \
	obj/SPI__ITConfig.rel \
	obj/SPI__GetFlagStatus.rel \
	obj/SPI__ClearFlag.rel \
	obj/SPI__GetITStatus.rel \
	obj/SPI__ClearITPendingBit.rel \
	obj/SYSCFG__RIDeInit.rel \
	obj/SYSCFG__RITIMInputCaptureConfig.rel \
	obj/SYSCFG__RIAnalogSwitchConfig.rel \
	obj/SYSCFG__RIIOSwitchConfig.rel \
	obj/SYSCFG__RIResistorConfig.rel \
	obj/SYSCFG__REMAPDeInit.rel \
	obj/SYSCFG__REMAPPinConfig.rel \
	obj/SYSCFG__REMAPDMAChannelConfig.rel \
	obj/TIM1__DeInit.rel \
	obj/TIM1__TimeBaseInit.rel \
	obj/TIM1__PrescalerConfig.rel \
	obj/TIM1__CounterModeConfig.rel \
	obj/TIM1__SetCounter.rel \
	obj/TIM1__SetAutoreload.rel \
	obj/TIM1__GetCounter.rel \
	obj/TIM1__GetPrescaler.rel \
	obj/TIM1__UpdateDisableConfig.rel \
	obj/TIM1__UpdateRequestConfig.rel \
	obj/TIM1__ARRPreloadConfig.rel \
	obj/TIM1__SelectOnePulseMode.rel \
	obj/TIM1__Cmd.rel \
	obj/TIM1__OC1Init.rel \
	obj/TIM1__OC2Init.rel \
	obj/TIM1__OC3Init.rel \
	obj/TIM1__BDTRConfig.rel \
	obj/TIM1__CtrlPWMOutputs.rel \
	obj/TIM1__SelectOCxM.rel \
	obj/TIM1__SetCompare1.rel \
	obj/TIM1__SetCompare2.rel \
	obj/TIM1__SetCompare3.rel \
	obj/TIM1__SetCompare4.rel \
	obj/TIM1__CCPreloadControl.rel \
	obj/TIM1__ForcedOC1Config.rel \
	obj/TIM1__ForcedOC2Config.rel \
	obj/TIM1__ForcedOC3Config.rel \
	obj/TIM1__OC1PreloadConfig.rel \
	obj/TIM1__OC2PreloadConfig.rel \
	obj/TIM1__OC3PreloadConfig.rel \
	obj/TIM1__OC4PreloadConfig.rel \
	obj/TIM1__OC1FastConfig.rel \
	obj/TIM1__OC2FastConfig.rel \
	obj/TIM1__OC3FastConfig.rel \
	obj/TIM1__ClearOC1Ref.rel \
	obj/TIM1__ClearOC2Ref.rel \
	obj/TIM1__ClearOC3Ref.rel \
	obj/TIM1__ClearOC4Ref.rel \
	obj/TIM1__OC1PolarityConfig.rel \
	obj/TIM1__OC1NPolarityConfig.rel \
	obj/TIM1__OC2PolarityConfig.rel \
	obj/TIM1__OC2NPolarityConfig.rel \
	obj/TIM1__OC3PolarityConfig.rel \
	obj/TIM1__OC3NPolarityConfig.rel \
	obj/TIM1__SelectOCREFClear.rel \
	obj/TIM1__SelectCOM.rel \
	obj/TIM1__CCxCmd.rel \
	obj/TIM1__CCxNCmd.rel \
	obj/TIM1__ICInit.rel \
	obj/TIM1__PWMIConfig.rel \
	obj/TIM1__GetCapture1.rel \
	obj/TIM1__GetCapture2.rel \
	obj/TIM1__GetCapture3.rel \
	obj/TIM1__GetCapture4.rel \
	obj/TIM1__SetIC1Prescaler.rel \
	obj/TIM1__SetIC2Prescaler.rel \
	obj/TIM1__SetIC3Prescaler.rel \
	obj/TIM1__SetIC4Prescaler.rel \
	obj/TIM1__ITConfig.rel \
	obj/TIM1__GenerateEvent.rel \
	obj/TIM1__GetFlagStatus.rel \
	obj/TIM1__ClearFlag.rel \
	obj/TIM1__GetITStatus.rel \
	obj/TIM1__ClearITPendingBit.rel \
	obj/TIM1__DMAConfig.rel \
	obj/TIM1__DMACmd.rel \
	obj/TIM1__SelectCCDMA.rel \
	obj/TIM1__InternalClockConfig.rel \
	obj/TIM1__TIxExternalClockConfig.rel \
	obj/TIM1__ETRClockMode1Config.rel \
	obj/TIM1__ETRClockMode2Config.rel \
	obj/TIM1__SelectInputTrigger.rel \
	obj/TIM1__SelectOutputTrigger.rel \
	obj/TIM1__SelectSlaveMode.rel \
	obj/TIM1__SelectMasterSlaveMode.rel \
	obj/TIM1__ETRConfig.rel \
	obj/TIM1__EncoderInterfaceConfig.rel \
	obj/TIM1__SelectHallSensor.rel \
	obj/TIM1__TI1_Config.rel \
	obj/TIM1__TI2_Config.rel \
	obj/TIM1__TI3_Config.rel \
	obj/TIM1__TI4_Config.rel \
	obj/TIM2__DeInit.rel \
	obj/TIM2__TimeBaseInit.rel \
	obj/TIM2__PrescalerConfig.rel \
	obj/TIM2__CounterModeConfig.rel \
	obj/TIM2__SetCounter.rel \
	obj/TIM2__SetAutoreload.rel \
	obj/TIM2__GetCounter.rel \
	obj/TIM2__GetPrescaler.rel \
	obj/TIM2__UpdateDisableConfig.rel \
	obj/TIM2__UpdateRequestConfig.rel \
	obj/TIM2__ARRPreloadConfig.rel \
	obj/TIM2__SelectOnePulseMode.rel \
	obj/TIM2__Cmd.rel \
	obj/TIM2__OC1Init.rel \
	obj/TIM2__OC2Init.rel \
	obj/TIM2__BKRConfig.rel \
	obj/TIM2__CtrlPWMOutputs.rel \
	obj/TIM2__SelectOCxM.rel \
	obj/TIM2__SetCompare1.rel \
	obj/TIM2__SetCompare2.rel \
	obj/TIM2__ForcedOC1Config.rel \
	obj/TIM2__ForcedOC2Config.rel \
	obj/TIM2__OC1PreloadConfig.rel \
	obj/TIM2__OC2PreloadConfig.rel \
	obj/TIM2__OC1FastConfig.rel \
	obj/TIM2__OC2FastConfig.rel \
	obj/TIM2__OC1PolarityConfig.rel \
	obj/TIM2__OC2PolarityConfig.rel \
	obj/TIM2__CCxCmd.rel \
	obj/TIM2__ICInit.rel \
	obj/TIM2__PWMIConfig.rel \
	obj/TIM2__GetCapture1.rel \
	obj/TIM2__GetCapture2.rel \
	obj/TIM2__SetIC1Prescaler.rel \
	obj/TIM2__SetIC2Prescaler.rel \
	obj/TIM2__ITConfig.rel \
	obj/TIM2__GenerateEvent.rel \
	obj/TIM2__GetFlagStatus.rel \
	obj/TIM2__ClearFlag.rel \
	obj/TIM2__GetITStatus.rel \
	obj/TIM2__ClearITPendingBit.rel \
	obj/TIM2__DMACmd.rel \
	obj/TIM2__SelectCCDMA.rel \
	obj/TIM2__InternalClockConfig.rel \
	obj/TIM2__TIxExternalClockConfig.rel \
	obj/TIM2__ETRClockMode1Config.rel \
	obj/TIM2__ETRClockMode2Config.rel \
	obj/TIM2__SelectInputTrigger.rel \
	obj/TIM2__SelectOutputTrigger.rel \
	obj/TIM2__SelectSlaveMode.rel \
	obj/TIM2__SelectMasterSlaveMode.rel \
	obj/TIM2__ETRConfig.rel \
	obj/TIM2__EncoderInterfaceConfig.rel \
	obj/TIM2__SelectHallSensor.rel \
	obj/TIM2__TI1_Config.rel \
	obj/TIM2__TI2_Config.rel \
	obj/TIM3__DeInit.rel \
	obj/TIM3__TimeBaseInit.rel \
	obj/TIM3__PrescalerConfig.rel \
	obj/TIM3__CounterModeConfig.rel \
	obj/TIM3__SetCounter.rel \
	obj/TIM3__SetAutoreload.rel \
	obj/TIM3__GetCounter.rel \
	obj/TIM3__GetPrescaler.rel \
	obj/TIM3__UpdateDisableConfig.rel \
	obj/TIM3__UpdateRequestConfig.rel \
	obj/TIM3__ARRPreloadConfig.rel \
	obj/TIM3__SelectOnePulseMode.rel \
	obj/TIM3__Cmd.rel \
	obj/TIM3__OC1Init.rel \
	obj/TIM3__OC2Init.rel \
	obj/TIM3__BKRConfig.rel \
	obj/TIM3__CtrlPWMOutputs.rel \
	obj/TIM3__SelectOCxM.rel \
	obj/TIM3__SetCompare1.rel \
	obj/TIM3__SetCompare2.rel \
	obj/TIM3__ForcedOC1Config.rel \
	obj/TIM3__ForcedOC2Config.rel \
	obj/TIM3__OC1PreloadConfig.rel \
	obj/TIM3__OC2PreloadConfig.rel \
	obj/TIM3__OC1FastConfig.rel \
	obj/TIM3__OC2FastConfig.rel \
	obj/TIM3__OC1PolarityConfig.rel \
	obj/TIM3__OC2PolarityConfig.rel \
	obj/TIM3__CCxCmd.rel \
	obj/TIM3__ICInit.rel \
	obj/TIM3__PWMIConfig.rel \
	obj/TIM3__GetCapture1.rel \
	obj/TIM3__GetCapture2.rel \
	obj/TIM3__SetIC1Prescaler.rel \
	obj/TIM3__SetIC2Prescaler.rel \
	obj/TIM3__ITConfig.rel \
	obj/TIM3__GenerateEvent.rel \
	obj/TIM3__GetFlagStatus.rel \
	obj/TIM3__ClearFlag.rel \
	obj/TIM3__GetITStatus.rel \
	obj/TIM3__ClearITPendingBit.rel \
	obj/TIM3__DMACmd.rel \
	obj/TIM3__SelectCCDMA.rel \
	obj/TIM3__InternalClockConfig.rel \
	obj/TIM3__TIxExternalClockConfig.rel \
	obj/TIM3__ETRClockMode1Config.rel \
	obj/TIM3__ETRClockMode2Config.rel \
	obj/TIM3__SelectInputTrigger.rel \
	obj/TIM3__SelectOutputTrigger.rel \
	obj/TIM3__SelectSlaveMode.rel \
	obj/TIM3__SelectMasterSlaveMode.rel \
	obj/TIM3__ETRConfig.rel \
	obj/TIM3__EncoderInterfaceConfig.rel \
	obj/TIM3__SelectHallSensor.rel \
	obj/TIM3__TI1_Config.rel \
	obj/TIM3__TI2_Config.rel \
	obj/TIM4__DeInit.rel \
	obj/TIM4__TimeBaseInit.rel \
	obj/TIM4__PrescalerConfig.rel \
	obj/TIM4__SetCounter.rel \
	obj/TIM4__SetAutoreload.rel \
	obj/TIM4__GetCounter.rel \
	obj/TIM4__GetPrescaler.rel \
	obj/TIM4__UpdateDisableConfig.rel \
	obj/TIM4__UpdateRequestConfig.rel \
	obj/TIM4__ARRPreloadConfig.rel \
	obj/TIM4__SelectOnePulseMode.rel \
	obj/TIM4__Cmd.rel \
	obj/TIM4__ITConfig.rel \
	obj/TIM4__GenerateEvent.rel \
	obj/TIM4__GetFlagStatus.rel \
	obj/TIM4__ClearFlag.rel \
	obj/TIM4__GetITStatus.rel \
	obj/TIM4__ClearITPendingBit.rel \
	obj/TIM4__DMACmd.rel \
	obj/TIM4__InternalClockConfig.rel \
	obj/TIM4__SelectInputTrigger.rel \
	obj/TIM4__SelectOutputTrigger.rel \
	obj/TIM4__SelectSlaveMode.rel \
	obj/TIM4__SelectMasterSlaveMode.rel \
	obj/TIM5__DeInit.rel \
	obj/TIM5__TimeBaseInit.rel \
	obj/TIM5__PrescalerConfig.rel \
	obj/TIM5__CounterModeConfig.rel \
	obj/TIM5__SetCounter.rel \
	obj/TIM5__SetAutoreload.rel \
	obj/TIM5__GetCounter.rel \
	obj/TIM5__GetPrescaler.rel \
	obj/TIM5__UpdateDisableConfig.rel \
	obj/TIM5__UpdateRequestConfig.rel \
	obj/TIM5__ARRPreloadConfig.rel \
	obj/TIM5__SelectOnePulseMode.rel \
	obj/TIM5__Cmd.rel \
	obj/TIM5__OC1Init.rel \
	obj/TIM5__OC2Init.rel \
	obj/TIM5__BKRConfig.rel \
	obj/TIM5__CtrlPWMOutputs.rel \
	obj/TIM5__SelectOCxM.rel \
	obj/TIM5__SetCompare1.rel \
	obj/TIM5__SetCompare2.rel \
	obj/TIM5__ForcedOC1Config.rel \
	obj/TIM5__ForcedOC2Config.rel \
	obj/TIM5__OC1PreloadConfig.rel \
	obj/TIM5__OC2PreloadConfig.rel \
	obj/TIM5__OC1FastConfig.rel \
	obj/TIM5__OC2FastConfig.rel \
	obj/TIM5__OC1PolarityConfig.rel \
	obj/TIM5__OC2PolarityConfig.rel \
	obj/TIM5__CCxCmd.rel \
	obj/TIM5__ICInit.rel \
	obj/TIM5__PWMIConfig.rel \
	obj/TIM5__GetCapture1.rel \
	obj/TIM5__GetCapture2.rel \
	obj/TIM5__SetIC1Prescaler.rel \
	obj/TIM5__SetIC2Prescaler.rel \
	obj/TIM5__ITConfig.rel \
	obj/TIM5__GenerateEvent.rel \
	obj/TIM5__GetFlagStatus.rel \
	obj/TIM5__ClearFlag.rel \
	obj/TIM5__GetITStatus.rel \
	obj/TIM5__ClearITPendingBit.rel \
	obj/TIM5__DMACmd.rel \
	obj/TIM5__InternalClockConfig.rel \
	obj/TIM5__TIxExternalClockConfig.rel \
	obj/TIM5__ETRClockMode1Config.rel \
	obj/TIM5__ETRClockMode2Config.rel \
	obj/TIM5__SelectInputTrigger.rel \
	obj/TIM5__SelectOutputTrigger.rel \
	obj/TIM5__SelectSlaveMode.rel \
	obj/TIM5__SelectMasterSlaveMode.rel \
	obj/TIM5__ETRConfig.rel \
	obj/TIM5__EncoderInterfaceConfig.rel \
	obj/TIM5__SelectHallSensor.rel \
	obj/TIM5__TI1_Config.rel \
	obj/TIM5__TI2_Config.rel \
	obj/USART__DeInit.rel \
	obj/USART__Init.rel \
	obj/USART__ClockInit.rel \
	obj/USART__Cmd.rel \
	obj/USART__SetPrescaler.rel \
	obj/USART__SendBreak.rel \
	obj/USART__ReceiveData8.rel \
	obj/USART__ReceiveData9.rel \
	obj/USART__SendData8.rel \
	obj/USART__SendData9.rel \
	obj/USART__ReceiverWakeUpCmd.rel \
	obj/USART__SetAddress.rel \
	obj/USART__WakeUpConfig.rel \
	obj/USART__HalfDuplexCmd.rel \
	obj/USART__SmartCardCmd.rel \
	obj/USART__SmartCardNACKCmd.rel \
	obj/USART__SetGuardTime.rel \
	obj/USART__IrDAConfig.rel \
	obj/USART__IrDACmd.rel \
	obj/USART__DMACmd.rel \
	obj/USART__ITConfig.rel \
	obj/USART__GetFlagStatus.rel \
	obj/USART__ClearFlag.rel \
	obj/USART__GetITStatus.rel \
	obj/USART__ClearITPendingBit.rel \
	obj/WFE__DeInit.rel \
	obj/WFE__WakeUpSourceEventCmd.rel \
	obj/WFE__GetWakeUpSourceEventStatus.rel \
	obj/WWDG__Init.rel \
	obj/WWDG__SetWindowValue.rel \
	obj/WWDG__SetCounter.rel \
	obj/WWDG__Enable.rel \
	obj/WWDG__GetCounter.rel \
	obj/WWDG__SWReset.rel

.PHONY: all clean

all:
	@mkdir -p obj
	@echo "Compiling: stm8l15x_adc.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_adc.c -DADC__DeInit                          -o obj/ADC__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_adc.c -DADC__Init                            -o obj/ADC__Init.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_adc.c -DADC__Cmd                             -o obj/ADC__Cmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_adc.c -DADC__SoftwareStartConv               -o obj/ADC__SoftwareStartConv.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_adc.c -DADC__ExternalTrigConfig              -o obj/ADC__ExternalTrigConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_adc.c -DADC__AnalogWatchdogChannelSelect     -o obj/ADC__AnalogWatchdogChannelSelect.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_adc.c -DADC__AnalogWatchdogThresholdsConfig  -o obj/ADC__AnalogWatchdogThresholdsConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_adc.c -DADC__AnalogWatchdogConfig            -o obj/ADC__AnalogWatchdogConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_adc.c -DADC__TempSensorCmd                   -o obj/ADC__TempSensorCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_adc.c -DADC__VrefintCmd                      -o obj/ADC__VrefintCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_adc.c -DADC__ChannelCmd                      -o obj/ADC__ChannelCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_adc.c -DADC__SamplingTimeConfig              -o obj/ADC__SamplingTimeConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_adc.c -DADC__SchmittTriggerConfig            -o obj/ADC__SchmittTriggerConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_adc.c -DADC__GetConversionValue              -o obj/ADC__GetConversionValue.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_adc.c -DADC__DMACmd                          -o obj/ADC__DMACmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_adc.c -DADC__ITConfig                        -o obj/ADC__ITConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_adc.c -DADC__GetFlagStatus                   -o obj/ADC__GetFlagStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_adc.c -DADC__ClearFlag                       -o obj/ADC__ClearFlag.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_adc.c -DADC__GetITStatus                     -o obj/ADC__GetITStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_adc.c -DADC__ClearITPendingBit               -o obj/ADC__ClearITPendingBit.rel
	@echo "Compiling: stm8l15x_aes.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_aes.c -DAES__DeInit                          -o obj/AES__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_aes.c -DAES__OperationModeConfig             -o obj/AES__OperationModeConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_aes.c -DAES__Cmd                             -o obj/AES__Cmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_aes.c -DAES__WriteSubData                    -o obj/AES__WriteSubData.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_aes.c -DAES__WriteSubKey                     -o obj/AES__WriteSubKey.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_aes.c -DAES__ReadSubData                     -o obj/AES__ReadSubData.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_aes.c -DAES__ReadSubKey                      -o obj/AES__ReadSubKey.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_aes.c -DAES__DMAConfig                       -o obj/AES__DMAConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_aes.c -DAES__ITConfig                        -o obj/AES__ITConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_aes.c -DAES__GetFlagStatus                   -o obj/AES__GetFlagStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_aes.c -DAES__ClearFlag                       -o obj/AES__ClearFlag.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_aes.c -DAES__GetITStatus                     -o obj/AES__GetITStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_aes.c -DAES__ClearITPendingBit               -o obj/AES__ClearITPendingBit.rel
	@echo "Compiling: stm8l15x_beep.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_beep.c -DBEEP__DeInit                        -o obj/BEEP__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_beep.c -DBEEP__Init                          -o obj/BEEP__Init.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_beep.c -DBEEP__Cmd                           -o obj/BEEP__Cmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_beep.c -DBEEP__LSClockToTIMConnectCmd        -o obj/BEEP__LSClockToTIMConnectCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_beep.c -DBEEP__LSICalibrationConfig          -o obj/BEEP__LSICalibrationConfig.rel
	@echo "Compiling: stm8l15x_clk.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__Const                           -o obj/CLK__Const.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__DeInit                          -o obj/CLK__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__HSICmd                          -o obj/CLK__HSICmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__LSICmd                          -o obj/CLK__LSICmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__HSEConfig                       -o obj/CLK__HSEConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__LSEConfig                       -o obj/CLK__LSEConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__ClockSecuritySystemEnable       -o obj/CLK__ClockSecuritySystemEnable.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__ClockSecuritySytemDeglitchCmd   -o obj/CLK__ClockSecuritySytemDeglitchCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__CCOConfig                       -o obj/CLK__CCOConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__SYSCLKSourceConfig              -o obj/CLK__SYSCLKSourceConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__GetSYSCLKSource                 -o obj/CLK__GetSYSCLKSource.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__GetClockFreq                    -o obj/CLK__GetClockFreq.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__SYSCLKDivConfig                 -o obj/CLK__SYSCLKDivConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__SYSCLKSourceSwitchCmd           -o obj/CLK__SYSCLKSourceSwitchCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__RTCClockConfig                  -o obj/CLK__RTCClockConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__BEEPClockConfig                 -o obj/CLK__BEEPClockConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__PeripheralClockConfig           -o obj/CLK__PeripheralClockConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__LSEClockSecuritySystemEnable    -o obj/CLK__LSEClockSecuritySystemEnable.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__RTCCLKSwitchOnLSEFailureEnable  -o obj/CLK__RTCCLKSwitchOnLSEFailureEnable.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__HaltConfig                      -o obj/CLK__HaltConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__MainRegulatorCmd                -o obj/CLK__MainRegulatorCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__ITConfig                        -o obj/CLK__ITConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__GetFlagStatus                   -o obj/CLK__GetFlagStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__ClearFlag                       -o obj/CLK__ClearFlag.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__GetITStatus                     -o obj/CLK__GetITStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_clk.c -DCLK__ClearITPendingBit               -o obj/CLK__ClearITPendingBit.rel
	@echo "Compiling: stm8l15x_comp.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_comp.c -DCOMP__DeInit                        -o obj/COMP__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_comp.c -DCOMP__Init                          -o obj/COMP__Init.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_comp.c -DCOMP__VrefintToCOMP1Connect         -o obj/COMP__VrefintToCOMP1Connect.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_comp.c -DCOMP__EdgeConfig                    -o obj/COMP__EdgeConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_comp.c -DCOMP__GetOutputLevel                -o obj/COMP__GetOutputLevel.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_comp.c -DCOMP__WindowCmd                     -o obj/COMP__WindowCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_comp.c -DCOMP__VrefintOutputCmd              -o obj/COMP__VrefintOutputCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_comp.c -DCOMP__SchmittTriggerCmd             -o obj/COMP__SchmittTriggerCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_comp.c -DCOMP__TriggerConfig                 -o obj/COMP__TriggerConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_comp.c -DCOMP__ITConfig                      -o obj/COMP__ITConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_comp.c -DCOMP__GetFlagStatus                 -o obj/COMP__GetFlagStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_comp.c -DCOMP__ClearFlag                     -o obj/COMP__ClearFlag.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_comp.c -DCOMP__GetITStatus                   -o obj/COMP__GetITStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_comp.c -DCOMP__ClearITPendingBit             -o obj/COMP__ClearITPendingBit.rel
	@echo "Compiling: stm8l15x_dac.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dac.c -DDAC__DeInit                          -o obj/DAC__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dac.c -DDAC__Init                            -o obj/DAC__Init.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dac.c -DDAC__Cmd                             -o obj/DAC__Cmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dac.c -DDAC__SoftwareTriggerCmd              -o obj/DAC__SoftwareTriggerCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dac.c -DDAC__DualSoftwareTriggerCmd          -o obj/DAC__DualSoftwareTriggerCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dac.c -DDAC__WaveGenerationCmd               -o obj/DAC__WaveGenerationCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dac.c -DDAC__SetNoiseWaveLFSR                -o obj/DAC__SetNoiseWaveLFSR.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dac.c -DDAC__SetTriangleWaveAmplitude        -o obj/DAC__SetTriangleWaveAmplitude.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dac.c -DDAC__SetChannel1Data                 -o obj/DAC__SetChannel1Data.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dac.c -DDAC__SetChannel2Data                 -o obj/DAC__SetChannel2Data.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dac.c -DDAC__SetDualChannelData              -o obj/DAC__SetDualChannelData.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dac.c -DDAC__GetDataOutputValue              -o obj/DAC__GetDataOutputValue.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dac.c -DDAC__DMACmd                          -o obj/DAC__DMACmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dac.c -DDAC__ITConfig                        -o obj/DAC__ITConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dac.c -DDAC__GetFlagStatus                   -o obj/DAC__GetFlagStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dac.c -DDAC__ClearFlag                       -o obj/DAC__ClearFlag.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dac.c -DDAC__GetITStatus                     -o obj/DAC__GetITStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dac.c -DDAC__ClearITPendingBit               -o obj/DAC__ClearITPendingBit.rel
	@echo "Compiling: stm8l15x_dma.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dma.c -DDMA__GlobalDeInit                    -o obj/DMA__GlobalDeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dma.c -DDMA__DeInit                          -o obj/DMA__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dma.c -DDMA__Init                            -o obj/DMA__Init.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dma.c -DDMA__GlobalCmd                       -o obj/DMA__GlobalCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dma.c -DDMA__Cmd                             -o obj/DMA__Cmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dma.c -DDMA__SetTimeOut                      -o obj/DMA__SetTimeOut.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dma.c -DDMA__SetCurrDataCounter              -o obj/DMA__SetCurrDataCounter.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dma.c -DDMA__GetCurrDataCounter              -o obj/DMA__GetCurrDataCounter.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dma.c -DDMA__ITConfig                        -o obj/DMA__ITConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dma.c -DDMA__GetFlagStatus                   -o obj/DMA__GetFlagStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dma.c -DDMA__ClearFlag                       -o obj/DMA__ClearFlag.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dma.c -DDMA__GetITStatus                     -o obj/DMA__GetITStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_dma.c -DDMA__ClearITPendingBit               -o obj/DMA__ClearITPendingBit.rel
	@echo "Compiling: stm8l15x_exti.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_exti.c -DEXTI__DeInit                        -o obj/EXTI__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_exti.c -DEXTI__SetPinSensitivity             -o obj/EXTI__SetPinSensitivity.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_exti.c -DEXTI__SelectPort                    -o obj/EXTI__SelectPort.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_exti.c -DEXTI__SetHalfPortSelection          -o obj/EXTI__SetHalfPortSelection.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_exti.c -DEXTI__SetPortSensitivity            -o obj/EXTI__SetPortSensitivity.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_exti.c -DEXTI__GetPinSensitivity             -o obj/EXTI__GetPinSensitivity.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_exti.c -DEXTI__GetPortSensitivity            -o obj/EXTI__GetPortSensitivity.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_exti.c -DEXTI__GetITStatus                   -o obj/EXTI__GetITStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_exti.c -DEXTI__ClearITPendingBit             -o obj/EXTI__ClearITPendingBit.rel
	@echo "Compiling: stm8l15x_flash.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_flash.c -DFLASH__SetProgrammingTime          -o obj/FLASH__SetProgrammingTime.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_flash.c -DFLASH__GetProgrammingTime          -o obj/FLASH__GetProgrammingTime.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_flash.c -DFLASH__PowerWaitModeConfig         -o obj/FLASH__PowerWaitModeConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_flash.c -DFLASH__DeInit                      -o obj/FLASH__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_flash.c -DFLASH__Unlock                      -o obj/FLASH__Unlock.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_flash.c -DFLASH__Lock                        -o obj/FLASH__Lock.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_flash.c -DFLASH__ProgramByte                 -o obj/FLASH__ProgramByte.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_flash.c -DFLASH__EraseByte                   -o obj/FLASH__EraseByte.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_flash.c -DFLASH__ProgramWord                 -o obj/FLASH__ProgramWord.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_flash.c -DFLASH__ReadByte                    -o obj/FLASH__ReadByte.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_flash.c -DFLASH__ProgramOptionByte           -o obj/FLASH__ProgramOptionByte.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_flash.c -DFLASH__EraseOptionByte             -o obj/FLASH__EraseOptionByte.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_flash.c -DFLASH__GetReadOutProtectionStatus  -o obj/FLASH__GetReadOutProtectionStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_flash.c -DFLASH__GetBootSize                 -o obj/FLASH__GetBootSize.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_flash.c -DFLASH__GetCodeSize                 -o obj/FLASH__GetCodeSize.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_flash.c -DFLASH__ITConfig                    -o obj/FLASH__ITConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_flash.c -DFLASH__GetFlagStatus               -o obj/FLASH__GetFlagStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_flash.c -DFLASH__PowerRunModeConfig          -o obj/FLASH__PowerRunModeConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_flash.c -DFLASH__GetPowerStatus              -o obj/FLASH__GetPowerStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_flash.c -DFLASH__ProgramBlock                -o obj/FLASH__ProgramBlock.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_flash.c -DFLASH__EraseBlock                  -o obj/FLASH__EraseBlock.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_flash.c -DFLASH__WaitForLastOperation        -o obj/FLASH__WaitForLastOperation.rel
	@echo "Compiling: stm8l15x_gpio.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_gpio.c -DGPIO__DeInit                        -o obj/GPIO__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_gpio.c -DGPIO__Init                          -o obj/GPIO__Init.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_gpio.c -DGPIO__ExternalPullUpConfig          -o obj/GPIO__ExternalPullUpConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_gpio.c -DGPIO__Write                         -o obj/GPIO__Write.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_gpio.c -DGPIO__WriteBit                      -o obj/GPIO__WriteBit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_gpio.c -DGPIO__SetBits                       -o obj/GPIO__SetBits.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_gpio.c -DGPIO__ResetBits                     -o obj/GPIO__ResetBits.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_gpio.c -DGPIO__ToggleBits                    -o obj/GPIO__ToggleBits.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_gpio.c -DGPIO__ReadInputData                 -o obj/GPIO__ReadInputData.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_gpio.c -DGPIO__ReadOutputData                -o obj/GPIO__ReadOutputData.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_gpio.c -DGPIO__ReadInputDataBit              -o obj/GPIO__ReadInputDataBit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_gpio.c -DGPIO__ReadOutputDataBit             -o obj/GPIO__ReadOutputDataBit.rel
	@echo "Compiling: stm8l15x_i2c.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__DeInit                          -o obj/I2C__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__Init                            -o obj/I2C__Init.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__Cmd                             -o obj/I2C__Cmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__GeneralCallCmd                  -o obj/I2C__GeneralCallCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__GenerateSTART                   -o obj/I2C__GenerateSTART.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__GenerateSTOP                    -o obj/I2C__GenerateSTOP.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__SoftwareResetCmd                -o obj/I2C__SoftwareResetCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__StretchClockCmd                 -o obj/I2C__StretchClockCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__ARPCmd                          -o obj/I2C__ARPCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__AcknowledgeConfig               -o obj/I2C__AcknowledgeConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__OwnAddress2Config               -o obj/I2C__OwnAddress2Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__DualAddressCmd                  -o obj/I2C__DualAddressCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__AckPositionConfig               -o obj/I2C__AckPositionConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__SMBusAlertConfig                -o obj/I2C__SMBusAlertConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__FastModeDutyCycleConfig         -o obj/I2C__FastModeDutyCycleConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__Send7bitAddress                 -o obj/I2C__Send7bitAddress.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__SendData                        -o obj/I2C__SendData.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__ReceiveData                     -o obj/I2C__ReceiveData.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__TransmitPEC                     -o obj/I2C__TransmitPEC.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__CalculatePEC                    -o obj/I2C__CalculatePEC.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__PECPositionConfig               -o obj/I2C__PECPositionConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__GetPEC                          -o obj/I2C__GetPEC.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__DMACmd                          -o obj/I2C__DMACmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__DMALastTransferCmd              -o obj/I2C__DMALastTransferCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__ITConfig                        -o obj/I2C__ITConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__ReadRegister                    -o obj/I2C__ReadRegister.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__CheckEvent                      -o obj/I2C__CheckEvent.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__GetLastEvent                    -o obj/I2C__GetLastEvent.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__GetFlagStatus                   -o obj/I2C__GetFlagStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__ClearFlag                       -o obj/I2C__ClearFlag.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__GetITStatus                     -o obj/I2C__GetITStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_i2c.c -DI2C__ClearITPendingBit               -o obj/I2C__ClearITPendingBit.rel
	@echo "Compiling: stm8l15x_irtim.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_irtim.c -DIRTIM__DeInit                      -o obj/IRTIM__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_irtim.c -DIRTIM__Cmd                         -o obj/IRTIM__Cmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_irtim.c -DIRTIM__HighSinkODCmd               -o obj/IRTIM__HighSinkODCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_irtim.c -DIRTIM__GetStatus                   -o obj/IRTIM__GetStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_irtim.c -DIRTIM__GetHighSinkODStatus         -o obj/IRTIM__GetHighSinkODStatus.rel
	@echo "Compiling: stm8l15x_itc.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_itc.c -DITC__GetCPUCC                        -o obj/ITC__GetCPUCC.rel --disable-warning 59
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_itc.c -DITC__DeInit                          -o obj/ITC__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_itc.c -DITC__GetSoftIntStatus                -o obj/ITC__GetSoftIntStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_itc.c -DITC__GetSoftwarePriority             -o obj/ITC__GetSoftwarePriority.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_itc.c -DITC__SetSoftwarePriority             -o obj/ITC__SetSoftwarePriority.rel
	@echo "Compiling: stm8l15x_iwdg.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_iwdg.c -DIWDG__WriteAccessCmd                -o obj/IWDG__WriteAccessCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_iwdg.c -DIWDG__SetPrescaler                  -o obj/IWDG__SetPrescaler.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_iwdg.c -DIWDG__SetReload                     -o obj/IWDG__SetReload.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_iwdg.c -DIWDG__ReloadCounter                 -o obj/IWDG__ReloadCounter.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_iwdg.c -DIWDG__Enable                        -o obj/IWDG__Enable.rel
	@echo "Compiling: stm8l15x_lcd.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_lcd.c -DLCD__DeInit                          -o obj/LCD__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_lcd.c -DLCD__Init                            -o obj/LCD__Init.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_lcd.c -DLCD__PortMaskConfig                  -o obj/LCD__PortMaskConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_lcd.c -DLCD__Cmd                             -o obj/LCD__Cmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_lcd.c -DLCD__HighDriveCmd                    -o obj/LCD__HighDriveCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_lcd.c -DLCD__PulseOnDurationConfig           -o obj/LCD__PulseOnDurationConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_lcd.c -DLCD__DeadTimeConfig                  -o obj/LCD__DeadTimeConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_lcd.c -DLCD__BlinkConfig                     -o obj/LCD__BlinkConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_lcd.c -DLCD__ContrastConfig                  -o obj/LCD__ContrastConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_lcd.c -DLCD__WriteRAM                        -o obj/LCD__WriteRAM.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_lcd.c -DLCD__PageSelect                      -o obj/LCD__PageSelect.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_lcd.c -DLCD__ITConfig                        -o obj/LCD__ITConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_lcd.c -DLCD__GetFlagStatus                   -o obj/LCD__GetFlagStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_lcd.c -DLCD__ClearFlag                       -o obj/LCD__ClearFlag.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_lcd.c -DLCD__GetITStatus                     -o obj/LCD__GetITStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_lcd.c -DLCD__ClearITPendingBit               -o obj/LCD__ClearITPendingBit.rel
	@echo "Compiling: stm8l15x_pwr.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_pwr.c -DPWR__DeInit                          -o obj/PWR__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_pwr.c -DPWR__PVDLevelConfig                  -o obj/PWR__PVDLevelConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_pwr.c -DPWR__PVDCmd                          -o obj/PWR__PVDCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_pwr.c -DPWR__FastWakeUpCmd                   -o obj/PWR__FastWakeUpCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_pwr.c -DPWR__UltraLowPowerCmd                -o obj/PWR__UltraLowPowerCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_pwr.c -DPWR__PVDITConfig                     -o obj/PWR__PVDITConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_pwr.c -DPWR__GetFlagStatus                   -o obj/PWR__GetFlagStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_pwr.c -DPWR__PVDClearFlag                    -o obj/PWR__PVDClearFlag.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_pwr.c -DPWR__PVDGetITStatus                  -o obj/PWR__PVDGetITStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_pwr.c -DPWR__PVDClearITPendingBit            -o obj/PWR__PVDClearITPendingBit.rel
	@echo "Compiling: stm8l15x_rst.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rst.c -DRST__GetFlagStatus                   -o obj/RST__GetFlagStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rst.c -DRST__ClearFlag                       -o obj/RST__ClearFlag.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rst.c -DRST__GPOutputEnable                  -o obj/RST__GPOutputEnable.rel
	@echo "Compiling: stm8l15x_rtc.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__DeInit                          -o obj/RTC__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__Init                            -o obj/RTC__Init.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__StructInit                      -o obj/RTC__StructInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__WriteProtectionCmd              -o obj/RTC__WriteProtectionCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__EnterInitMode                   -o obj/RTC__EnterInitMode.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__ExitInitMode                    -o obj/RTC__ExitInitMode.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__WaitForSynchro                  -o obj/RTC__WaitForSynchro.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__RatioCmd                        -o obj/RTC__RatioCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__BypassShadowCmd                 -o obj/RTC__BypassShadowCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__SetTime                         -o obj/RTC__SetTime.rel --disable-warning 110
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__TimeStructInit                  -o obj/RTC__TimeStructInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__GetTime                         -o obj/RTC__GetTime.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__GetSubSecond                    -o obj/RTC__GetSubSecond.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__SetDate                         -o obj/RTC__SetDate.rel --disable-warning 110
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__DateStructInit                  -o obj/RTC__DateStructInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__GetDate                         -o obj/RTC__GetDate.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__SetAlarm                        -o obj/RTC__SetAlarm.rel --disable-warning 110
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__AlarmStructInit                 -o obj/RTC__AlarmStructInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__GetAlarm                        -o obj/RTC__GetAlarm.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__AlarmCmd                        -o obj/RTC__AlarmCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__AlarmSubSecondConfig            -o obj/RTC__AlarmSubSecondConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__WakeUpClockConfig               -o obj/RTC__WakeUpClockConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__SetWakeUpCounter                -o obj/RTC__SetWakeUpCounter.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__GetWakeUpCounter                -o obj/RTC__GetWakeUpCounter.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__WakeUpCmd                       -o obj/RTC__WakeUpCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__DayLightSavingConfig            -o obj/RTC__DayLightSavingConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__GetStoreOperation               -o obj/RTC__GetStoreOperation.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__OutputConfig                    -o obj/RTC__OutputConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__SynchroShiftConfig              -o obj/RTC__SynchroShiftConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__SmoothCalibConfig               -o obj/RTC__SmoothCalibConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__CalibOutputConfig               -o obj/RTC__CalibOutputConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__CalibOutputCmd                  -o obj/RTC__CalibOutputCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__TamperLevelConfig               -o obj/RTC__TamperLevelConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__TamperFilterConfig              -o obj/RTC__TamperFilterConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__TamperSamplingFreqConfig        -o obj/RTC__TamperSamplingFreqConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__TamperPinsPrechargeDuration     -o obj/RTC__TamperPinsPrechargeDuration.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__TamperCmd                       -o obj/RTC__TamperCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__ITConfig                        -o obj/RTC__ITConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__GetFlagStatus                   -o obj/RTC__GetFlagStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__ClearFlag                       -o obj/RTC__ClearFlag.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__GetITStatus                     -o obj/RTC__GetITStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__ClearITPendingBit               -o obj/RTC__ClearITPendingBit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__ByteToBcd2                      -o obj/RTC__ByteToBcd2.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_rtc.c -DRTC__Bcd2ToByte                      -o obj/RTC__Bcd2ToByte.rel
	@echo "Compiling: stm8l15x_spi.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_spi.c -DSPI__DeInit                          -o obj/SPI__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_spi.c -DSPI__Init                            -o obj/SPI__Init.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_spi.c -DSPI__Cmd                             -o obj/SPI__Cmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_spi.c -DSPI__NSSInternalSoftwareCmd          -o obj/SPI__NSSInternalSoftwareCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_spi.c -DSPI__BiDirectionalLineConfig         -o obj/SPI__BiDirectionalLineConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_spi.c -DSPI__SendData                        -o obj/SPI__SendData.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_spi.c -DSPI__ReceiveData                     -o obj/SPI__ReceiveData.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_spi.c -DSPI__TransmitCRC                     -o obj/SPI__TransmitCRC.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_spi.c -DSPI__CalculateCRCCmd                 -o obj/SPI__CalculateCRCCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_spi.c -DSPI__GetCRC                          -o obj/SPI__GetCRC.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_spi.c -DSPI__ResetCRC                        -o obj/SPI__ResetCRC.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_spi.c -DSPI__GetCRCPolynomial                -o obj/SPI__GetCRCPolynomial.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_spi.c -DSPI__DMACmd                          -o obj/SPI__DMACmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_spi.c -DSPI__ITConfig                        -o obj/SPI__ITConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_spi.c -DSPI__GetFlagStatus                   -o obj/SPI__GetFlagStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_spi.c -DSPI__ClearFlag                       -o obj/SPI__ClearFlag.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_spi.c -DSPI__GetITStatus                     -o obj/SPI__GetITStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_spi.c -DSPI__ClearITPendingBit               -o obj/SPI__ClearITPendingBit.rel
	@echo "Compiling: stm8l15x_syscfg.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_syscfg.c -DSYSCFG__RIDeInit                  -o obj/SYSCFG__RIDeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_syscfg.c -DSYSCFG__RITIMInputCaptureConfig   -o obj/SYSCFG__RITIMInputCaptureConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_syscfg.c -DSYSCFG__RIAnalogSwitchConfig      -o obj/SYSCFG__RIAnalogSwitchConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_syscfg.c -DSYSCFG__RIIOSwitchConfig          -o obj/SYSCFG__RIIOSwitchConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_syscfg.c -DSYSCFG__RIResistorConfig          -o obj/SYSCFG__RIResistorConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_syscfg.c -DSYSCFG__REMAPDeInit               -o obj/SYSCFG__REMAPDeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_syscfg.c -DSYSCFG__REMAPPinConfig            -o obj/SYSCFG__REMAPPinConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_syscfg.c -DSYSCFG__REMAPDMAChannelConfig     -o obj/SYSCFG__REMAPDMAChannelConfig.rel
	@echo "Compiling: stm8l15x_tim1.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__DeInit                        -o obj/TIM1__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__TimeBaseInit                  -o obj/TIM1__TimeBaseInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__PrescalerConfig               -o obj/TIM1__PrescalerConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__CounterModeConfig             -o obj/TIM1__CounterModeConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__SetCounter                    -o obj/TIM1__SetCounter.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__SetAutoreload                 -o obj/TIM1__SetAutoreload.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__GetCounter                    -o obj/TIM1__GetCounter.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__GetPrescaler                  -o obj/TIM1__GetPrescaler.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__UpdateDisableConfig           -o obj/TIM1__UpdateDisableConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__UpdateRequestConfig           -o obj/TIM1__UpdateRequestConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__ARRPreloadConfig              -o obj/TIM1__ARRPreloadConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__SelectOnePulseMode            -o obj/TIM1__SelectOnePulseMode.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__Cmd                           -o obj/TIM1__Cmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__OC1Init                       -o obj/TIM1__OC1Init.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__OC2Init                       -o obj/TIM1__OC2Init.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__OC3Init                       -o obj/TIM1__OC3Init.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__BDTRConfig                    -o obj/TIM1__BDTRConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__CtrlPWMOutputs                -o obj/TIM1__CtrlPWMOutputs.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__SelectOCxM                    -o obj/TIM1__SelectOCxM.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__SetCompare1                   -o obj/TIM1__SetCompare1.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__SetCompare2                   -o obj/TIM1__SetCompare2.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__SetCompare3                   -o obj/TIM1__SetCompare3.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__SetCompare4                   -o obj/TIM1__SetCompare4.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__CCPreloadControl              -o obj/TIM1__CCPreloadControl.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__ForcedOC1Config               -o obj/TIM1__ForcedOC1Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__ForcedOC2Config               -o obj/TIM1__ForcedOC2Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__ForcedOC3Config               -o obj/TIM1__ForcedOC3Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__OC1PreloadConfig              -o obj/TIM1__OC1PreloadConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__OC2PreloadConfig              -o obj/TIM1__OC2PreloadConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__OC3PreloadConfig              -o obj/TIM1__OC3PreloadConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__OC4PreloadConfig              -o obj/TIM1__OC4PreloadConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__OC1FastConfig                 -o obj/TIM1__OC1FastConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__OC2FastConfig                 -o obj/TIM1__OC2FastConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__OC3FastConfig                 -o obj/TIM1__OC3FastConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__ClearOC1Ref                   -o obj/TIM1__ClearOC1Ref.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__ClearOC2Ref                   -o obj/TIM1__ClearOC2Ref.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__ClearOC3Ref                   -o obj/TIM1__ClearOC3Ref.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__ClearOC4Ref                   -o obj/TIM1__ClearOC4Ref.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__OC1PolarityConfig             -o obj/TIM1__OC1PolarityConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__OC1NPolarityConfig            -o obj/TIM1__OC1NPolarityConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__OC2PolarityConfig             -o obj/TIM1__OC2PolarityConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__OC2NPolarityConfig            -o obj/TIM1__OC2NPolarityConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__OC3PolarityConfig             -o obj/TIM1__OC3PolarityConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__OC3NPolarityConfig            -o obj/TIM1__OC3NPolarityConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__SelectOCREFClear              -o obj/TIM1__SelectOCREFClear.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__SelectCOM                     -o obj/TIM1__SelectCOM.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__CCxCmd                        -o obj/TIM1__CCxCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__CCxNCmd                       -o obj/TIM1__CCxNCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__ICInit                        -o obj/TIM1__ICInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__PWMIConfig                    -o obj/TIM1__PWMIConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__GetCapture1                   -o obj/TIM1__GetCapture1.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__GetCapture2                   -o obj/TIM1__GetCapture2.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__GetCapture3                   -o obj/TIM1__GetCapture3.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__GetCapture4                   -o obj/TIM1__GetCapture4.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__SetIC1Prescaler               -o obj/TIM1__SetIC1Prescaler.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__SetIC2Prescaler               -o obj/TIM1__SetIC2Prescaler.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__SetIC3Prescaler               -o obj/TIM1__SetIC3Prescaler.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__SetIC4Prescaler               -o obj/TIM1__SetIC4Prescaler.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__ITConfig                      -o obj/TIM1__ITConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__GenerateEvent                 -o obj/TIM1__GenerateEvent.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__GetFlagStatus                 -o obj/TIM1__GetFlagStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__ClearFlag                     -o obj/TIM1__ClearFlag.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__GetITStatus                   -o obj/TIM1__GetITStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__ClearITPendingBit             -o obj/TIM1__ClearITPendingBit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__DMAConfig                     -o obj/TIM1__DMAConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__DMACmd                        -o obj/TIM1__DMACmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__SelectCCDMA                   -o obj/TIM1__SelectCCDMA.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__InternalClockConfig           -o obj/TIM1__InternalClockConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__TIxExternalClockConfig        -o obj/TIM1__TIxExternalClockConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__ETRClockMode1Config           -o obj/TIM1__ETRClockMode1Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__ETRClockMode2Config           -o obj/TIM1__ETRClockMode2Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__SelectInputTrigger            -o obj/TIM1__SelectInputTrigger.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__SelectOutputTrigger           -o obj/TIM1__SelectOutputTrigger.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__SelectSlaveMode               -o obj/TIM1__SelectSlaveMode.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__SelectMasterSlaveMode         -o obj/TIM1__SelectMasterSlaveMode.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__ETRConfig                     -o obj/TIM1__ETRConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__EncoderInterfaceConfig        -o obj/TIM1__EncoderInterfaceConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__SelectHallSensor              -o obj/TIM1__SelectHallSensor.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__TI1_Config                    -o obj/TIM1__TI1_Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__TI2_Config                    -o obj/TIM1__TI2_Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__TI3_Config                    -o obj/TIM1__TI3_Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim1.c -DTIM1__TI4_Config                    -o obj/TIM1__TI4_Config.rel
	@echo "Compiling: stm8l15x_tim2.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__DeInit                        -o obj/TIM2__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__TimeBaseInit                  -o obj/TIM2__TimeBaseInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__PrescalerConfig               -o obj/TIM2__PrescalerConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__CounterModeConfig             -o obj/TIM2__CounterModeConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__SetCounter                    -o obj/TIM2__SetCounter.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__SetAutoreload                 -o obj/TIM2__SetAutoreload.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__GetCounter                    -o obj/TIM2__GetCounter.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__GetPrescaler                  -o obj/TIM2__GetPrescaler.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__UpdateDisableConfig           -o obj/TIM2__UpdateDisableConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__UpdateRequestConfig           -o obj/TIM2__UpdateRequestConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__ARRPreloadConfig              -o obj/TIM2__ARRPreloadConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__SelectOnePulseMode            -o obj/TIM2__SelectOnePulseMode.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__Cmd                           -o obj/TIM2__Cmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__OC1Init                       -o obj/TIM2__OC1Init.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__OC2Init                       -o obj/TIM2__OC2Init.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__BKRConfig                     -o obj/TIM2__BKRConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__CtrlPWMOutputs                -o obj/TIM2__CtrlPWMOutputs.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__SelectOCxM                    -o obj/TIM2__SelectOCxM.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__SetCompare1                   -o obj/TIM2__SetCompare1.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__SetCompare2                   -o obj/TIM2__SetCompare2.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__ForcedOC1Config               -o obj/TIM2__ForcedOC1Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__ForcedOC2Config               -o obj/TIM2__ForcedOC2Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__OC1PreloadConfig              -o obj/TIM2__OC1PreloadConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__OC2PreloadConfig              -o obj/TIM2__OC2PreloadConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__OC1FastConfig                 -o obj/TIM2__OC1FastConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__OC2FastConfig                 -o obj/TIM2__OC2FastConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__OC1PolarityConfig             -o obj/TIM2__OC1PolarityConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__OC2PolarityConfig             -o obj/TIM2__OC2PolarityConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__CCxCmd                        -o obj/TIM2__CCxCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__ICInit                        -o obj/TIM2__ICInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__PWMIConfig                    -o obj/TIM2__PWMIConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__GetCapture1                   -o obj/TIM2__GetCapture1.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__GetCapture2                   -o obj/TIM2__GetCapture2.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__SetIC1Prescaler               -o obj/TIM2__SetIC1Prescaler.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__SetIC2Prescaler               -o obj/TIM2__SetIC2Prescaler.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__ITConfig                      -o obj/TIM2__ITConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__GenerateEvent                 -o obj/TIM2__GenerateEvent.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__GetFlagStatus                 -o obj/TIM2__GetFlagStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__ClearFlag                     -o obj/TIM2__ClearFlag.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__GetITStatus                   -o obj/TIM2__GetITStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__ClearITPendingBit             -o obj/TIM2__ClearITPendingBit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__DMACmd                        -o obj/TIM2__DMACmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__SelectCCDMA                   -o obj/TIM2__SelectCCDMA.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__InternalClockConfig           -o obj/TIM2__InternalClockConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__TIxExternalClockConfig        -o obj/TIM2__TIxExternalClockConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__ETRClockMode1Config           -o obj/TIM2__ETRClockMode1Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__ETRClockMode2Config           -o obj/TIM2__ETRClockMode2Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__SelectInputTrigger            -o obj/TIM2__SelectInputTrigger.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__SelectOutputTrigger           -o obj/TIM2__SelectOutputTrigger.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__SelectSlaveMode               -o obj/TIM2__SelectSlaveMode.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__SelectMasterSlaveMode         -o obj/TIM2__SelectMasterSlaveMode.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__ETRConfig                     -o obj/TIM2__ETRConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__EncoderInterfaceConfig        -o obj/TIM2__EncoderInterfaceConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__SelectHallSensor              -o obj/TIM2__SelectHallSensor.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__TI1_Config                    -o obj/TIM2__TI1_Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim2.c -DTIM2__TI2_Config                    -o obj/TIM2__TI2_Config.rel
	@echo "Compiling: stm8l15x_tim3.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__DeInit                        -o obj/TIM3__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__TimeBaseInit                  -o obj/TIM3__TimeBaseInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__PrescalerConfig               -o obj/TIM3__PrescalerConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__CounterModeConfig             -o obj/TIM3__CounterModeConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__SetCounter                    -o obj/TIM3__SetCounter.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__SetAutoreload                 -o obj/TIM3__SetAutoreload.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__GetCounter                    -o obj/TIM3__GetCounter.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__GetPrescaler                  -o obj/TIM3__GetPrescaler.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__UpdateDisableConfig           -o obj/TIM3__UpdateDisableConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__UpdateRequestConfig           -o obj/TIM3__UpdateRequestConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__ARRPreloadConfig              -o obj/TIM3__ARRPreloadConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__SelectOnePulseMode            -o obj/TIM3__SelectOnePulseMode.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__Cmd                           -o obj/TIM3__Cmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__OC1Init                       -o obj/TIM3__OC1Init.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__OC2Init                       -o obj/TIM3__OC2Init.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__BKRConfig                     -o obj/TIM3__BKRConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__CtrlPWMOutputs                -o obj/TIM3__CtrlPWMOutputs.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__SelectOCxM                    -o obj/TIM3__SelectOCxM.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__SetCompare1                   -o obj/TIM3__SetCompare1.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__SetCompare2                   -o obj/TIM3__SetCompare2.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__ForcedOC1Config               -o obj/TIM3__ForcedOC1Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__ForcedOC2Config               -o obj/TIM3__ForcedOC2Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__OC1PreloadConfig              -o obj/TIM3__OC1PreloadConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__OC2PreloadConfig              -o obj/TIM3__OC2PreloadConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__OC1FastConfig                 -o obj/TIM3__OC1FastConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__OC2FastConfig                 -o obj/TIM3__OC2FastConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__OC1PolarityConfig             -o obj/TIM3__OC1PolarityConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__OC2PolarityConfig             -o obj/TIM3__OC2PolarityConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__CCxCmd                        -o obj/TIM3__CCxCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__ICInit                        -o obj/TIM3__ICInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__PWMIConfig                    -o obj/TIM3__PWMIConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__GetCapture1                   -o obj/TIM3__GetCapture1.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__GetCapture2                   -o obj/TIM3__GetCapture2.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__SetIC1Prescaler               -o obj/TIM3__SetIC1Prescaler.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__SetIC2Prescaler               -o obj/TIM3__SetIC2Prescaler.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__ITConfig                      -o obj/TIM3__ITConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__GenerateEvent                 -o obj/TIM3__GenerateEvent.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__GetFlagStatus                 -o obj/TIM3__GetFlagStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__ClearFlag                     -o obj/TIM3__ClearFlag.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__GetITStatus                   -o obj/TIM3__GetITStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__ClearITPendingBit             -o obj/TIM3__ClearITPendingBit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__DMACmd                        -o obj/TIM3__DMACmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__SelectCCDMA                   -o obj/TIM3__SelectCCDMA.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__InternalClockConfig           -o obj/TIM3__InternalClockConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__TIxExternalClockConfig        -o obj/TIM3__TIxExternalClockConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__ETRClockMode1Config           -o obj/TIM3__ETRClockMode1Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__ETRClockMode2Config           -o obj/TIM3__ETRClockMode2Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__SelectInputTrigger            -o obj/TIM3__SelectInputTrigger.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__SelectOutputTrigger           -o obj/TIM3__SelectOutputTrigger.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__SelectSlaveMode               -o obj/TIM3__SelectSlaveMode.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__SelectMasterSlaveMode         -o obj/TIM3__SelectMasterSlaveMode.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__ETRConfig                     -o obj/TIM3__ETRConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__EncoderInterfaceConfig        -o obj/TIM3__EncoderInterfaceConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__SelectHallSensor              -o obj/TIM3__SelectHallSensor.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__TI1_Config                    -o obj/TIM3__TI1_Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim3.c -DTIM3__TI2_Config                    -o obj/TIM3__TI2_Config.rel
	@echo "Compiling: stm8l15x_tim4.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__DeInit                        -o obj/TIM4__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__TimeBaseInit                  -o obj/TIM4__TimeBaseInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__PrescalerConfig               -o obj/TIM4__PrescalerConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__SetCounter                    -o obj/TIM4__SetCounter.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__SetAutoreload                 -o obj/TIM4__SetAutoreload.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__GetCounter                    -o obj/TIM4__GetCounter.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__GetPrescaler                  -o obj/TIM4__GetPrescaler.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__UpdateDisableConfig           -o obj/TIM4__UpdateDisableConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__UpdateRequestConfig           -o obj/TIM4__UpdateRequestConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__ARRPreloadConfig              -o obj/TIM4__ARRPreloadConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__SelectOnePulseMode            -o obj/TIM4__SelectOnePulseMode.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__Cmd                           -o obj/TIM4__Cmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__ITConfig                      -o obj/TIM4__ITConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__GenerateEvent                 -o obj/TIM4__GenerateEvent.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__GetFlagStatus                 -o obj/TIM4__GetFlagStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__ClearFlag                     -o obj/TIM4__ClearFlag.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__GetITStatus                   -o obj/TIM4__GetITStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__ClearITPendingBit             -o obj/TIM4__ClearITPendingBit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__DMACmd                        -o obj/TIM4__DMACmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__InternalClockConfig           -o obj/TIM4__InternalClockConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__SelectInputTrigger            -o obj/TIM4__SelectInputTrigger.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__SelectOutputTrigger           -o obj/TIM4__SelectOutputTrigger.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__SelectSlaveMode               -o obj/TIM4__SelectSlaveMode.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim4.c -DTIM4__SelectMasterSlaveMode         -o obj/TIM4__SelectMasterSlaveMode.rel
	@echo "Compiling: stm8l15x_tim5.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__DeInit                        -o obj/TIM5__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__TimeBaseInit                  -o obj/TIM5__TimeBaseInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__PrescalerConfig               -o obj/TIM5__PrescalerConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__CounterModeConfig             -o obj/TIM5__CounterModeConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__SetCounter                    -o obj/TIM5__SetCounter.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__SetAutoreload                 -o obj/TIM5__SetAutoreload.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__GetCounter                    -o obj/TIM5__GetCounter.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__GetPrescaler                  -o obj/TIM5__GetPrescaler.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__UpdateDisableConfig           -o obj/TIM5__UpdateDisableConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__UpdateRequestConfig           -o obj/TIM5__UpdateRequestConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__ARRPreloadConfig              -o obj/TIM5__ARRPreloadConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__SelectOnePulseMode            -o obj/TIM5__SelectOnePulseMode.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__Cmd                           -o obj/TIM5__Cmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__OC1Init                       -o obj/TIM5__OC1Init.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__OC2Init                       -o obj/TIM5__OC2Init.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__BKRConfig                     -o obj/TIM5__BKRConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__CtrlPWMOutputs                -o obj/TIM5__CtrlPWMOutputs.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__SelectOCxM                    -o obj/TIM5__SelectOCxM.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__SetCompare1                   -o obj/TIM5__SetCompare1.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__SetCompare2                   -o obj/TIM5__SetCompare2.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__ForcedOC1Config               -o obj/TIM5__ForcedOC1Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__ForcedOC2Config               -o obj/TIM5__ForcedOC2Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__OC1PreloadConfig              -o obj/TIM5__OC1PreloadConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__OC2PreloadConfig              -o obj/TIM5__OC2PreloadConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__OC1FastConfig                 -o obj/TIM5__OC1FastConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__OC2FastConfig                 -o obj/TIM5__OC2FastConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__OC1PolarityConfig             -o obj/TIM5__OC1PolarityConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__OC2PolarityConfig             -o obj/TIM5__OC2PolarityConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__CCxCmd                        -o obj/TIM5__CCxCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__ICInit                        -o obj/TIM5__ICInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__PWMIConfig                    -o obj/TIM5__PWMIConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__GetCapture1                   -o obj/TIM5__GetCapture1.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__GetCapture2                   -o obj/TIM5__GetCapture2.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__SetIC1Prescaler               -o obj/TIM5__SetIC1Prescaler.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__SetIC2Prescaler               -o obj/TIM5__SetIC2Prescaler.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__ITConfig                      -o obj/TIM5__ITConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__GenerateEvent                 -o obj/TIM5__GenerateEvent.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__GetFlagStatus                 -o obj/TIM5__GetFlagStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__ClearFlag                     -o obj/TIM5__ClearFlag.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__GetITStatus                   -o obj/TIM5__GetITStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__ClearITPendingBit             -o obj/TIM5__ClearITPendingBit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__DMACmd                        -o obj/TIM5__DMACmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__InternalClockConfig           -o obj/TIM5__InternalClockConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__TIxExternalClockConfig        -o obj/TIM5__TIxExternalClockConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__ETRClockMode1Config           -o obj/TIM5__ETRClockMode1Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__ETRClockMode2Config           -o obj/TIM5__ETRClockMode2Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__SelectInputTrigger            -o obj/TIM5__SelectInputTrigger.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__SelectOutputTrigger           -o obj/TIM5__SelectOutputTrigger.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__SelectSlaveMode               -o obj/TIM5__SelectSlaveMode.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__SelectMasterSlaveMode         -o obj/TIM5__SelectMasterSlaveMode.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__ETRConfig                     -o obj/TIM5__ETRConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__EncoderInterfaceConfig        -o obj/TIM5__EncoderInterfaceConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__SelectHallSensor              -o obj/TIM5__SelectHallSensor.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__TI1_Config                    -o obj/TIM5__TI1_Config.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_tim5.c -DTIM5__TI2_Config                    -o obj/TIM5__TI2_Config.rel
	@echo "Compiling: stm8l15x_usart.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__DeInit                      -o obj/USART__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__Init                        -o obj/USART__Init.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__ClockInit                   -o obj/USART__ClockInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__Cmd                         -o obj/USART__Cmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__SetPrescaler                -o obj/USART__SetPrescaler.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__SendBreak                   -o obj/USART__SendBreak.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__ReceiveData8                -o obj/USART__ReceiveData8.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__ReceiveData9                -o obj/USART__ReceiveData9.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__SendData8                   -o obj/USART__SendData8.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__SendData9                   -o obj/USART__SendData9.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__ReceiverWakeUpCmd           -o obj/USART__ReceiverWakeUpCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__SetAddress                  -o obj/USART__SetAddress.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__WakeUpConfig                -o obj/USART__WakeUpConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__HalfDuplexCmd               -o obj/USART__HalfDuplexCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__SmartCardCmd                -o obj/USART__SmartCardCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__SmartCardNACKCmd            -o obj/USART__SmartCardNACKCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__SetGuardTime                -o obj/USART__SetGuardTime.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__IrDAConfig                  -o obj/USART__IrDAConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__IrDACmd                     -o obj/USART__IrDACmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__DMACmd                      -o obj/USART__DMACmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__ITConfig                    -o obj/USART__ITConfig.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__GetFlagStatus               -o obj/USART__GetFlagStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__ClearFlag                   -o obj/USART__ClearFlag.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__GetITStatus                 -o obj/USART__GetITStatus.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_usart.c -DUSART__ClearITPendingBit           -o obj/USART__ClearITPendingBit.rel
	@echo "Compiling: stm8l15x_wfe.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_wfe.c -DWFE__DeInit                          -o obj/WFE__DeInit.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_wfe.c -DWFE__WakeUpSourceEventCmd            -o obj/WFE__WakeUpSourceEventCmd.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_wfe.c -DWFE__GetWakeUpSourceEventStatus      -o obj/WFE__GetWakeUpSourceEventStatus.rel
	@echo "Compiling: stm8l15x_wwdg.c"
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_wwdg.c -DWWDG__Init                          -o obj/WWDG__Init.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_wwdg.c -DWWDG__SetWindowValue                -o obj/WWDG__SetWindowValue.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_wwdg.c -DWWDG__SetCounter                    -o obj/WWDG__SetCounter.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_wwdg.c -DWWDG__Enable                        -o obj/WWDG__Enable.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_wwdg.c -DWWDG__GetCounter                    -o obj/WWDG__GetCounter.rel
	@$(SDCC) -mstm8 -Iinc $(CFLAGS) -c src/stm8l15x_wwdg.c -DWWDG__SWReset                       -o obj/WWDG__SWReset.rel
	@echo "Creating archive: spl.lib"
	@$(SDAR) -rc spl.lib $(OBJECTS)

clean:
	@rm -fr obj
	@rm -f spl.lib

