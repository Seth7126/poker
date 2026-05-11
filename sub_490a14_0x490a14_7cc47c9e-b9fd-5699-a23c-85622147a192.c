// ============================================================
// 函数名称: sub_490a14
// 虚拟地址: 0x490a14
// WARP GUID: 7cc47c9e-b9fd-5699-a23c-85622147a192
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4033d0, sub_402c90, sub_4030a0, sub_403428, sub_40301c, sub_40b4b0
// [被调用的父级函数]: sub_490d38
// ============================================================

void** __convention("regparm")sub_490a14(void** arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_108 = ebx
    int32_t esi
    int32_t var_10c = esi
    int32_t edi
    int32_t var_110 = edi
    int32_t* esp = &var_110
    
    if (arg2.b != 0)
        void var_120
        esp = &var_120
        arg1 = sub_4033d0(arg3, arg2)
    
    char var_104
    sub_40301c(*arg1, &var_104)
    int32_t ecx
    ecx.b = var_104
    int32_t ecx_2
    int32_t edx_1
    ecx_2, edx_1 = sub_402c90(&var_104, 0x490a98, ecx + 1)
    
    if (ecx == 0xffffffff)
        edx_1.b = 1
        sub_40b4b0(sub_48fdb0+0x48, edx_1, "A TISGSoundBuffer cannot be created")
        sub_403828()
        noreturn
    
    sub_4030a0(ecx_2, 0)
    arg1[0xa] = arg3
    
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
