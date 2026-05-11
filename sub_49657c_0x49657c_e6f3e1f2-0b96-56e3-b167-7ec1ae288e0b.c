// ============================================================
// 函数名称: sub_49657c
// 虚拟地址: 0x49657c
// WARP GUID: e6f3e1f2-0b96-56e3-b167-7ec1ae288e0b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_495068, sub_493fc0, sub_4030a0, sub_403428
// [被调用的父级函数]: sub_497894
// ============================================================

int32_t* __convention("regparm")sub_49657c(int32_t* arg1, int32_t arg2, int32_t arg3)
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
        arg1 = sub_4033d0(arg3, arg2)
    
    char ebx_1 = arg2.b
    arg2.b = 1
    int32_t eax_1
    int32_t ecx
    int32_t edx
    eax_1, ecx, edx = sub_4030a0(arg3, arg2)
    arg1[0x18] = eax_1
    edx.b = 1
    int32_t eax_3
    int32_t edx_1
    eax_3, edx_1 = sub_4030a0(ecx, edx)
    arg1[0x19] = eax_3
    edx_1.b = 1
    arg1[0x1a] = sub_493fc0(sub_493cfc+0x1d4, edx_1)
    sub_495068(arg1, 0, arg3)
    arg1[0xa].b = 8
    
    if (ebx_1 != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    return arg1
}
