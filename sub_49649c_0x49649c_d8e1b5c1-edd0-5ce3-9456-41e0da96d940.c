// ============================================================
// 函数名称: sub_49649c
// 虚拟地址: 0x49649c
// WARP GUID: d8e1b5c1-edd0-5ce3-9456-41e0da96d940
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_4033d0, sub_49555c, sub_495068, sub_496630, sub_403428
// [被调用的父级函数]: sub_496b90, sub_496423
// ============================================================

int32_t* __fastcallsub_49649c(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, void* arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t var_8 = arg1
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* esp_1 = &var_14
    
    if (arg2.b != 0)
        void var_24
        esp_1 = &var_24
        arg3 = sub_4033d0(arg1, arg2)
    
    int32_t ebx_1 = arg1
    var_8:3.b = arg2.b
    arg3[0x16] = arg4
    
    if (arg4 != 0)
        ebx_1, ebp_1 = sub_496630(arg4, arg3)
        void* edi_1 = arg3[0x16]
        
        if (0 != *(edi_1 + 0x28))
            arg3[0xd] = edi_1
            arg3[0xc] = sub_4967bc
            arg3[0xf] = arg3[0x16]
            arg3[0xe] = sub_496810
    
    int32_t ecx_1
    int32_t edx_1
    ecx_1, edx_1 = sub_495068(arg3, 0, ebx_1)
    edx_1.b = 0
    
    if (0 != *(arg3[0x16] + 0x28))
        sub_49555c(arg3, edx_1, ecx_1)
    
    if (arg3[2].b != 0)
        ecx_1.b = 2
        ebx_1.w = 0xffff
        sub_4032ac(arg3, nop)
    
    if (*(ebp_1 - 1) != 0)
        sub_403428(arg3)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_1
        esp_1 = &esp_1[4]
    
    *esp_1
    esp_1[1]
    esp_1[2]
    esp_1[3]
    esp_1[4]
    return arg3
}
