// ============================================================
// 函数名称: sub_49f0a4
// 虚拟地址: 0x49f0a4
// WARP GUID: bc21262e-1e7d-54db-9891-35a14ec22d98
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_403428, sub_4033d0, sub_403e4c
// [被调用的父级函数]: sub_4a0b84, sub_4a2ab4, sub_4a0af8, sub_4a1980
// ============================================================

int32_t* __convention("regparm")sub_49f0a4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t* esp = &var_c
    int32_t ecx
    
    if (arg2.b != 0)
        void var_1c
        esp = &var_1c
        arg1 = sub_4033d0(ecx, arg2)
    
    sub_4030a0(ecx, 0)
    sub_403e4c(&arg1[0xc], ": ")
    arg1[0xd].b = 0
    *(arg1 + 0x35) = 1
    *(arg1 + 0x36) = 1
    arg1[0xe] = 0x4e
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    return arg1
}
