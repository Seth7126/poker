// ============================================================
// 函数名称: sub_4ae8f4
// 虚拟地址: 0x4ae8f4
// WARP GUID: 8366fce8-1428-546a-83c8-20a3922b6ff5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_410cc0, sub_4030a0, sub_403428, sub_49ca70
// [被调用的父级函数]: sub_4ae878
// ============================================================

int32_t* __convention("regparm")sub_4ae8f4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t* esp = &var_c
    int32_t* ecx
    
    if (arg2.b != 0)
        void var_1c
        esp = &var_1c
        arg1 = sub_4033d0(ecx, arg2)
    
    sub_410cc0(arg1, 0, ecx)
    int32_t edx
    edx.b = 1
    int32_t* eax_1
    int32_t ecx_1
    int32_t edx_1
    eax_1, ecx_1, edx_1 = sub_49ca70(sub_49c984+0x28, edx, nullptr)
    arg1[3] = eax_1
    edx_1.b = 1
    arg1[4] = sub_4030a0(ecx_1, edx_1)
    
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
