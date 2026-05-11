// ============================================================
// 函数名称: sub_43e460
// 虚拟地址: 0x43e460
// WARP GUID: f91dac73-13ac-52c0-9931-986c4b0cb975
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_420080, sub_40fdf4, sub_403b60
// [被调用的父级函数]: 无
// ============================================================

void __fastcallsub_43e460(void** arg1)
{
    // 第一条实际指令: void** const var_8 = arg1
    void** const var_8 = arg1
    int32_t temp0 = data_5317d0
    data_5317d0 -= 1
    
    if (temp0 u>= 1)
        return 
    
    sub_403b60(0x43e35c)
    var_8 = &data_438654
    int32_t ecx
    int32_t edx_1
    ecx, edx_1 = sub_40fdf4(&var_8, 0)
    edx_1.b = 1
    int32_t eax_3
    int32_t ecx_1
    int32_t edx_2
    eax_3, ecx_1, edx_2 = sub_4030a0(ecx, edx_1)
    data_5317d4 = eax_3
    edx_2.b = 1
    int32_t eax_5
    int32_t edx_3
    eax_5, edx_3 = sub_4030a0(ecx_1, edx_2)
    data_5317c8 = eax_5
    edx_3.b = 1
    data_5317cc = sub_420080(sub_43909f+0x8d, edx_3)
}
