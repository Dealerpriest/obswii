#ifndef USFS_REGISTERS_H
#define USFS_REGISTERS_H

// EM7180 SENtral register map
// see http://www.emdeveloper.com/downloads/7180/EMSentral_EM7180_Register_Map_v1_3.pdf
//
#define EM7180_QX 0x00           // this is a 32-bit normalized floating point number read from registers 0x00-03
#define EM7180_QY 0x04           // this is a 32-bit normalized floating point number read from registers 0x04-07
#define EM7180_QZ 0x08           // this is a 32-bit normalized floating point number read from registers 0x08-0B
#define EM7180_QW 0x0C           // this is a 32-bit normalized floating point number read from registers 0x0C-0F
#define EM7180_QTIME 0x10        // this is a 16-bit unsigned integer read from registers 0x10-11
#define EM7180_MX 0x12           // int16_t from registers 0x12-13
#define EM7180_MY 0x14           // int16_t from registers 0x14-15
#define EM7180_MZ 0x16           // int16_t from registers 0x16-17
#define EM7180_MTIME 0x18        // uint16_t from registers 0x18-19
#define EM7180_AX 0x1A           // int16_t from registers 0x1A-1B
#define EM7180_AY 0x1C           // int16_t from registers 0x1C-1D
#define EM7180_AZ 0x1E           // int16_t from registers 0x1E-1F
#define EM7180_ATIME 0x20        // uint16_t from registers 0x20-21
#define EM7180_GX 0x22           // int16_t from registers 0x22-23
#define EM7180_GY 0x24           // int16_t from registers 0x24-25
#define EM7180_GZ 0x26           // int16_t from registers 0x26-27
#define EM7180_GTIME 0x28        // uint16_t from registers 0x28-29
#define EM7180_Baro 0x2A         // start of two-byte MS5637 pressure data, 16-bit signed interger
#define EM7180_BaroTIME 0x2C     // start of two-byte MS5637 pressure timestamp, 16-bit unsigned
#define EM7180_Temp 0x2E         // start of two-byte MS5637 temperature data, 16-bit signed interger
#define EM7180_TempTIME 0x30     // start of two-byte MS5637 temperature timestamp, 16-bit unsigned
#define EM7180_QRateDivisor 0x32 // uint8_t
#define EM7180_EnableEvents 0x33
#define EM7180_HostControl 0x34
#define EM7180_EventStatus 0x35
#define EM7180_SensorStatus 0x36
#define EM7180_SentralStatus 0x37
#define EM7180_AlgorithmStatus 0x38
#define EM7180_FeatureFlags 0x39
#define EM7180_ParamAcknowledge 0x3A
#define EM7180_SavedParamByte0 0x3B
#define EM7180_SavedParamByte1 0x3C
#define EM7180_SavedParamByte2 0x3D
#define EM7180_SavedParamByte3 0x3E
#define EM7180_ActualMagRate 0x45
#define EM7180_ActualAccelRate 0x46
#define EM7180_ActualGyroRate 0x47
#define EM7180_ActualBaroRate 0x48
#define EM7180_ActualTempRate 0x49
#define EM7180_ErrorRegister 0x50
#define EM7180_AlgorithmControl 0x54
#define EM7180_MagRate 0x55
#define EM7180_AccelRate 0x56
#define EM7180_GyroRate 0x57
#define EM7180_BaroRate 0x58
#define EM7180_TempRate 0x59
#define EM7180_LoadParamByte0 0x60
#define EM7180_LoadParamByte1 0x61
#define EM7180_LoadParamByte2 0x62
#define EM7180_LoadParamByte3 0x63
#define EM7180_ParamRequest 0x64
#define EM7180_ROMVersion1 0x70
#define EM7180_ROMVersion2 0x71
#define EM7180_RAMVersion1 0x72
#define EM7180_RAMVersion2 0x73
#define EM7180_ProductID 0x90
#define EM7180_RevisionID 0x91
#define EM7180_RunStatus 0x92
#define EM7180_UploadAddress 0x94 // uint16_t registers 0x94 (MSB)-5(LSB)
#define EM7180_UploadData 0x96
#define EM7180_CRCHost 0x97 // uint32_t from registers 0x97-9A
#define EM7180_ResetRequest 0x9B
#define EM7180_PassThruStatus 0x9E
#define EM7180_PassThruControl 0xA0
#define EM7180_ACC_LPF_BW 0x5B  //Register GP36
#define EM7180_GYRO_LPF_BW 0x5C //Register GP37
#define EM7180_BARO_LPF_BW 0x5D //Register GP38
#define EM7180_GP36 0x5B
#define EM7180_GP37 0x5C
#define EM7180_GP38 0x5D
#define EM7180_GP39 0x5E
#define EM7180_GP40 0x5F
#define EM7180_GP50 0x69
#define EM7180_GP51 0x6A
#define EM7180_GP52 0x6B
#define EM7180_GP53 0x6C
#define EM7180_GP54 0x6D
#define EM7180_GP55 0x6E
#define EM7180_GP56 0x6F

#define EM7180_ADDRESS 0x28           // Address of the EM7180 SENtral sensor hub
#define M24512DFM_DATA_ADDRESS 0x50   // Address of the 500 page M24512DRC EEPROM data buffer, 1024 bits (128 8-bit bytes) per page
#define M24512DFM_IDPAGE_ADDRESS 0x58 // Address of the single M24512DRC lockable EEPROM ID page
#define MPU9250_ADDRESS 0x68          // Device address of MPU9250 when ADO = 0
#define AK8963_ADDRESS 0x0C           // Address of magnetometer
#define BMP280_ADDRESS 0x76           // Address of BMP280 altimeter when ADO = 0

/*************************************************************************************************/
/*************                                                                     ***************/
/*************                 Enumerators and Structure Variables                 ***************/
/*************                                                                     ***************/
/*************************************************************************************************/

// // Set initial input parameters
// enum Ascale {
//   AFS_2G = 0,
//   AFS_4G,
//   AFS_8G,
//   AFS_16G
// };

// enum Gscale {
//   GFS_250DPS = 0,
//   GFS_500DPS,
//   GFS_1000DPS,
//   GFS_2000DPS
// };

// enum Mscale {
//   MFS_14BITS = 0, // 0.6 mG per LSB
//   MFS_16BITS      // 0.15 mG per LSB
// };

// enum Posr {
//   P_OSR_00 = 0,  // no op
//   P_OSR_01,
//   P_OSR_02,
//   P_OSR_04,
//   P_OSR_08,
//   P_OSR_16
// };

// enum Tosr {
//   T_OSR_00 = 0,  // no op
//   T_OSR_01,
//   T_OSR_02,
//   T_OSR_04,
//   T_OSR_08,
//   T_OSR_16
// };

// enum IIRFilter {
//   full = 0,  // bandwidth at full sample rate
//   BW0_223ODR,
//   BW0_092ODR,
//   BW0_042ODR,
//   BW0_021ODR // bandwidth at 0.021 x sample rate
// };

// enum Mode {
//   BMP280Sleep = 0,
//   forced,
//   forced2,
//   normal
// };

// enum SBy {
//   t_00_5ms = 0,
//   t_62_5ms,
//   t_125ms,
//   t_250ms,
//   t_500ms,
//   t_1000ms,
//   t_2000ms,
//   t_4000ms,
// };

// struct global_conf_t
// {
//   uint8_t currentSet;
//   int16_t accZero_max[3];
//   int16_t accZero_min[3];
//   int16_t magZero[3];
//   int16_t grav;
//   uint8_t checksum; // Last position in structure
// };

struct Sentral_WS_params
{
  uint8_t Sen_param[35][4];
};

#endif