// ============================================================
// 函数名称: sub_466fa4
// 虚拟地址: 0x466fa4
// WARP GUID: 906e776f-4bfb-50e3-a4fd-334c81eb5910
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_467044, sub_403428, sub_4033d0
// [被调用的父级函数]: sub_4e5e3c
// ============================================================

int32_t* __convention("regparm")sub_466fa4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t* esp = &var_8
    
    if (arg2.b != 0)
        void var_18
        esp = &var_18
        int32_t ecx
        arg1 = sub_4033d0(ecx, arg2)
    
    sub_467044(arg1, 0x80000001)
    arg1[6] = 0xf003f
    arg1[3].b = 1
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    return arg1
}
