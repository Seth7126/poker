// ============================================================
// 函数名称: sub_49ca70
// 虚拟地址: 0x49ca70
// WARP GUID: 04490b67-4076-5334-ac1f-ce29c80d49ff
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_404078, sub_4030a0, sub_49cb30, sub_403428
// [被调用的父级函数]: sub_4ae8f4, sub_4afc9c, sub_4af488, sub_4afc93
// ============================================================

int32_t* __convention("regparm")sub_49ca70(int32_t* arg1, int32_t arg2, char* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t edi
    int32_t var_10 = edi
    int32_t* esp = &var_10
    
    if (arg2.b != 0)
        void var_20
        esp = &var_20
        arg1 = sub_4033d0(arg3, arg2)
    
    char ebx_1 = arg2.b
    sub_4030a0(arg3, 0)
    
    if (sub_404078(arg3) s> 0)
        ebx_1 = sub_49cb30(arg1, arg3)
    
    if (ebx_1 != 0)
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
