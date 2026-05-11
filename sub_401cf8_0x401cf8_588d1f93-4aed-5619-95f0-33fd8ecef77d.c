// ============================================================
// 函数名称: sub_401cf8
// 虚拟地址: 0x401cf8
// WARP GUID: 588d1f93-4aed-5619-95f0-33fd8ecef77d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_401eb4
// [被调用的父级函数]: sub_401e1c, sub_401f88
// ============================================================

void __convention("regparm")sub_401cf8(void** arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* ebx = arg2 - 4 + arg1
    int32_t* ebx = arg2 - 4 + arg1
    
    if (arg2 s>= 0x10)
        *ebx = 0x80000007
        sub_401eb4(arg1, arg2 - 4)
        return 
    
    if (arg2 s< 4)
        return 
    
    void* ecx_3 = arg2 | 0x80000002
    *arg1 = ecx_3
    *ebx = ecx_3
}
