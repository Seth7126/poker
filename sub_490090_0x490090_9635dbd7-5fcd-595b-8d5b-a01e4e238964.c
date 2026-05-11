// ============================================================
// 函数名称: sub_490090
// 虚拟地址: 0x490090
// WARP GUID: 9635dbd7-5fcd-595b-8d5b-a01e4e238964
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c
// [被调用的父级函数]: sub_490768
// ============================================================

int32_t __convention("regparm")sub_490090(int32_t arg1, char** arg2)
{
    // 第一条实际指令: switch (arg1)
    switch (arg1)
        case 0
            return sub_403e4c(arg2, "The request completed successfully.")
        case 0x80004001
            return sub_403e4c(arg2, "The function called is not supported at this time.")
        case 0x80004002
            return sub_403e4c(arg2, "The requested COM interface is not available.")
        case 0x80004005
            return sub_403e4c(arg2, "An undetermined error occurred inside the DirectSound subsystem.")
        case 0x80040110
            return sub_403e4c(arg2, "The object does not support aggregation.")
        case 0x8007000e
            return sub_403e4c(arg2, 
                "The DirectSound subsystem could not allocate sufficient memory to complete the callers "
            "request.")
        case 0x80070057
            return sub_403e4c(arg2, "An invalid parameter was passed to the returning function.")
        case 0x8878000a
            return sub_403e4c(arg2, 
                "The request failed because resources, such as a priority level, were already in use by "
            "another caller.")
        case 0x8878001e
            return sub_403e4c(arg2, 
                "The control (volume, pan, and so forth) requested by the caller is not available.")
        case 0x88780032
            return sub_403e4c(arg2, "This function is not valid for the current state of this object.")
        case 0x88780046
            return sub_403e4c(arg2, 
                "The caller does not have the priority level required for the function to succeed.")
        case 0x88780064
            return sub_403e4c(arg2, "The specified wave format is not supported.")
        case 0x88780078
            return sub_403e4c(arg2, "No sound driver is available for use.")
        case 0x88780082
            return sub_403e4c(arg2, "The object is already initialized.")
        case 0x88780096
            return sub_403e4c(arg2, "The buffer memory has been lost and must be restored.")
        case 0x887800a0
            return sub_403e4c(arg2, 
                "Another application has a higher priority level, preventing this call from succeeding.")
        case 0x887800aa
            return sub_403e4c(arg2, 
                "The IDirectSound::Initialize method has not been called or has not been called successfully "
            "before other methods were called.")
    
    return sub_403e4c(arg2, "Unrecognized Error")
}
