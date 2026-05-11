// ============================================================
// 函数名称: sub_41f53c
// 虚拟地址: 0x41f53c
// WARP GUID: 8289420f-e4f0-56ac-8c4f-bebcf2cf5a58
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_41b0b8, sub_4030a0, sub_41d040, sub_403428
// [被调用的父级函数]: sub_447f44, sub_447f54, sub_4425d8
// ============================================================

int32_t* __convention("regparm")sub_41f53c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t edi
    int32_t var_c = edi
    int32_t* esp = &var_c
    
    if (arg2.b != 0)
        void var_1c
        esp = &var_1c
        int32_t ecx
        arg1 = sub_4033d0(ecx, arg2)
    
    int32_t ecx_1
    int32_t edx
    ecx_1, edx = sub_41b0b8(arg1, 0)
    *(arg1 + 0x19) = 1
    edx.b = 1
    void* eax_2 = sub_4030a0(ecx_1, edx)
    arg1[8] = eax_2
    sub_41d040(eax_2)
    
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
