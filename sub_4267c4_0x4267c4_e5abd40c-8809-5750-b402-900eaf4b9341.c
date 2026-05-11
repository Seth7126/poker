// ============================================================
// 函数名称: sub_4267c4
// 虚拟地址: 0x4267c4
// WARP GUID: e5abd40c-8809-5750-b402-900eaf4b9341
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: EnumClipboardFormats, GetClipboardData
// [内部子函数调用]: sub_403828, sub_4038c8, sub_42663c, sub_41bba4, sub_40b56c, sub_41bc94
// [被调用的父级函数]: sub_426940
// ============================================================

int32_t __convention("regparm")sub_4267c4(BOOL arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    sub_42663c(arg1)
    int32_t __saved_ebp
    int32_t* var_18 = &__saved_ebp
    int32_t var_1c = 0x426866
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    uint32_t eax_1
    int32_t ecx_1
    int32_t edx
    eax_1, ecx_1, edx = EnumClipboardFormats(0)
    uint32_t ebx = eax_1
    
    while (ebx.w != 0)
        if (sub_41bc94(ecx_1, ebx.w) != 0)
            sub_41bba4(GetClipboardData(zx.d(ebx.w)), ebx, arg2, GetClipboardData(9))
            return sub_4038c8(ExceptionList, var_1c)
        
        uint32_t eax_10
        eax_10, ecx_1, edx = EnumClipboardFormats(zx.d(ebx.w))
        ebx = eax_10
    
    edx.b = 1
    sub_40b56c(0x407d24, edx, data_530128)
    sub_403828()
    noreturn
}
