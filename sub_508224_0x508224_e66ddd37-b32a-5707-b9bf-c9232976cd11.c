// ============================================================
// 函数名称: sub_508224
// 虚拟地址: 0x508224
// WARP GUID: e66ddd37-b32a-5707-b9bf-c9232976cd11
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4033d0, sub_4974fc
// [被调用的父级函数]: sub_508730
// ============================================================

int32_t* __convention("regparm")sub_508224(int32_t* arg1, int32_t arg2)
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
        int32_t ecx
        arg1 = sub_4033d0(ecx, arg2)
    
    char ebx_1 = arg2.b
    *data_530660
    arg2.b = 1
    int32_t* eax = sub_4974fc(sub_4947f8+0x48, arg2)
    arg1[1] = eax
    eax[0x11] = arg1
    eax[0x10] = sub_508408
    eax[0x1f] = arg1
    eax[0x1e] = 0x50871c
    eax[0x15] = arg1
    eax[0x14] = sub_50840c
    eax[0x1b] = arg1
    eax[0x1a] = sub_508414
    arg1[2].b = 0
    *(arg1 + 9) = 0
    
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
