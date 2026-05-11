// ============================================================
// 函数名称: sub_4365f4
// 虚拟地址: 0x4365f4
// WARP GUID: 01f4fd51-82c0-582f-aa31-1b872282b912
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_403428, sub_4033d0, sub_415d18
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4365f4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ecx
    int32_t* var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* esp = &var_10
    
    if (arg2.b != 0)
        void var_20
        esp = &var_20
        arg1 = sub_4033d0(ecx, arg2)
    
    var_8:3.b = arg2.b
    int32_t ecx_1
    int32_t edx
    ecx_1, edx = sub_415d18(arg1, 0, ecx)
    edx.b = 1
    int32_t eax_2
    int32_t ecx_2
    int32_t edx_1
    eax_2, ecx_2, edx_1 = sub_4030a0(ecx_1, edx)
    arg1[9] = eax_2
    edx_1.b = 1
    void* eax_4 = sub_4030a0(ecx_2, edx_1)
    arg1[0xa] = eax_4
    *(eax_4 + 0xc) = arg1
    *(eax_4 + 8) = sub_436758
    
    if (var_8:3.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    esp[3]
    return arg1
}
