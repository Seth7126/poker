// ============================================================
// 函数名称: sub_412f70
// 虚拟地址: 0x412f70
// WARP GUID: 80d75e07-df56-5c9f-beb3-f18a0398c0c7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FindResourceA, SizeofResource, LoadResource, LockResource
// [内部子函数调用]: sub_412f00, sub_412ba8
// [被调用的父级函数]: sub_412ea8
// ============================================================

void* __fastcallsub_412f70(PSTR arg1, HMODULE arg2, void* arg3 @ eax, PSTR arg4)
{
    // 第一条实际指令: PSTR var_8 = arg1
    PSTR var_8 = arg1
    HRSRC eax_2 = FindResourceA(arg2, arg1, arg4)
    *(arg3 + 0x10) = eax_2
    int32_t __saved_ebp
    
    if (eax_2 == 0)
        sub_412f00(&__saved_ebp)
        noreturn
    
    HGLOBAL eax_4 = LoadResource(arg2, *(arg3 + 0x10))
    *(arg3 + 0x14) = eax_4
    
    if (eax_4 == 0)
        sub_412f00(&__saved_ebp)
        noreturn
    
    uint32_t eax_6 = SizeofResource(arg2, *(arg3 + 0x10))
    sub_412ba8(arg3, LockResource(*(arg3 + 0x14)), eax_6)
    return arg3
}
