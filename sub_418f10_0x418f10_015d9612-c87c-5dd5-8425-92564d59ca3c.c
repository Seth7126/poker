// ============================================================
// 函数名称: sub_418f10
// 虚拟地址: 0x418f10
// WARP GUID: 015d9612-c87c-5dd5-8425-92564d59ca3c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4033d0, sub_417d44
// [被调用的父级函数]: sub_429100, sub_4337f8, sub_42d8f4, sub_41920c
// ============================================================

int32_t* __convention("regparm")sub_418f10(int32_t* arg1, int32_t arg2)
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
    
    int32_t eax_1
    char ebx_2
    eax_1, ebx_2 = sub_417d44(data_5316a8, 0x52e5ec)
    arg1[4] = eax_1
    
    if (ebx_2 != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    return arg1
}
