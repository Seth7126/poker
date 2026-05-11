// ============================================================
// 函数名称: sub_402f38
// 虚拟地址: 0x402f38
// WARP GUID: 530475ff-e9b5-5943-9c9e-3aff3aefbefc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RegOpenKeyExA, RegQueryValueExA, RegCloseKey
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_406ad4
// ============================================================

enum WIN32_ERRORsub_402f38()
{
    // 第一条实际指令: uint32_t data = zx.d(data_52e000)
    uint32_t data = zx.d(data_52e000)
    HKEY hKey
    HKEY* phkResult = &hKey
    enum REG_SAM_FLAGS samDesired = KEY_QUERY_VALUE
    uint32_t ExceptionList = 0
    
    if (RegOpenKeyExA(0x80000002, "SOFTWARE\Borland\Delphi\RTL", ExceptionList, samDesired, phkResult)
            != NO_ERROR)
        enum WIN32_ERROR result
        result.w = data_52e000
        result.w &= 0xffc0
        result.w |= data.w & 0x3f
        data_52e000 = result.w
        return result
    
    int32_t __saved_ebp
    int32_t* var_14 = &__saved_ebp
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    uint32_t lpcbData = 4
    RegQueryValueExA(hKey, "FPUMaskValue", nullptr, nullptr, &data, &lpcbData)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_14_1 = 0x402fb0
    return RegCloseKey(hKey)
}
