// ============================================================
// 函数名称: sub_51b5c0
// 虚拟地址: 0x51b5c0
// WARP GUID: f1f73f12-51c4-5c56-90a5-a7472caa1a12
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_4033d0, sub_42da10, sub_4318d0
// [被调用的父级函数]: sub_4e548c
// ============================================================

void* __convention("regparm")sub_51b5c0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void var_c
    void* esp = &var_c
    int32_t ecx
    
    if (arg2.b != 0)
        void var_1c
        esp = &var_1c
        arg1 = sub_4033d0(ecx, arg2)
    
    char var_9 = arg2.b
    sub_4030a0(ecx, 0)
    *(arg1 + 0x964) = 1
    *(arg1 + 0x968) = 1
    *(arg1 + 0xac0) = 0
    *(arg1 + 0x978) = 0
    *(esp + 0xc) = &var_4
    *(esp + 8) = j_sub_4037f0
    TEB* fsbase
    *(esp + 4) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp + 4
    int32_t eax_7
    int32_t edx
    eax_7, edx = sub_4318d0(*data_530304)
    edx.b = 1
    *(arg1 + 4) = sub_42da10(sub_491396+0xe, edx, eax_7)
    *(esp + 0xc)
    fsbase->NtTib.ExceptionList = *(esp + 4)
    *(esp + 0xc) = sub_51b687
    void* eax_10 = *(arg1 + 4)
    void* result
    
    if (eax_10 != 0)
        *(eax_10 + 0x2c4) = arg1
        *(eax_10 + 0x2c0) = sub_51a7f4
        result = arg1
        *(result + 0x97a) = 0
    else
        result = arg1
        *(result + 0x97a) = 1
    
    return result
}
