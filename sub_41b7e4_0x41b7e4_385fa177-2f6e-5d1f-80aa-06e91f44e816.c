// ============================================================
// 函数名称: sub_41b7e4
// 虚拟地址: 0x41b7e4
// WARP GUID: 385fa177-2f6e-5d1f-80aa-06e91f44e816
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_403428, sub_4033d0, sub_41b890
// [被调用的父级函数]: sub_41b99c
// ============================================================

int32_t* __convention("regparm")sub_41b7e4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t* esp = &var_8
    int32_t ecx
    
    if (arg2.b != 0)
        void var_18
        esp = &var_18
        arg1 = sub_4033d0(ecx, arg2)
    
    char ebx_1 = arg2.b
    arg2.b = 1
    int32_t eax_1
    int32_t ecx_1
    int32_t edx
    eax_1, ecx_1, edx = sub_4030a0(ecx, arg2)
    arg1[1] = eax_1
    edx.b = 1
    arg1[2] = sub_4030a0(ecx_1, edx)
    sub_41b890(arg1, 3, &data_417940)
    sub_41b890(arg1, 0xe, &data_417940)
    sub_41b890(arg1, 2, 0x417a7c)
    
    if (ebx_1 != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    return arg1
}
