// ============================================================
// 函数名称: sub_466adc
// 虚拟地址: 0x466adc
// WARP GUID: b064179b-8dd9-5d80-914b-6aa7f960b7ab
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CharUpperBuffA, lstrcatA, GetVersionExA
// [内部子函数调用]: sub_404028, sub_402a38, sub_40423c, sub_404364, sub_403e1c
// [被调用的父级函数]: sub_466cb4, sub_48f538
// ============================================================

int32_tsub_466adc()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_1a4 = ebx
    void* var_1a0 = nullptr
    char* var_19c = nullptr
    int32_t* var_1a8 = &var_4
    int32_t (* var_1ac)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    OSVERSIONINFOA versionInformation
    versionInformation.dwOSVersionInfoSize = 0x94
    GetVersionExA(&versionInformation)
    char var_198 = 0
    sub_402a38(0, &var_19c)
    lstrcatA(&var_198, sub_40423c(var_19c))
    CharUpperBuffA(&var_198, 0x100)
    
    if (versionInformation.dwPlatformId == 2)
        sub_404028(&var_1a0, &var_198, 0x100)
        
        if (sub_404364(sub_466bc3+5, var_1a0) == 0xf5)
            ebx.b = 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_1a8_1)(int32_t* arg1 @ ebp) = sub_466bb6
    return sub_403e1c(&var_1a0, 2)
}
