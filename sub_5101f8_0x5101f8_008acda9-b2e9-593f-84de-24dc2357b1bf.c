// ============================================================
// 函数名称: sub_5101f8
// 虚拟地址: 0x5101f8
// WARP GUID: 008acda9-b2e9-593f-84de-24dc2357b1bf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_4af488, sub_403e4c, sub_4030a0, sub_403428
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

int32_t* __convention("regparm")sub_5101f8(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = arg3
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
        arg1 = sub_4033d0(arg3, arg2)
    
    var_8:2.b = arg3.b
    var_8:3.b = arg2.b
    int32_t ecx
    int32_t edx
    ecx, edx = sub_403e4c(&arg1[0xd], sub_51035f+5)
    char eax_1 = var_8:2.b
    arg1[0x15].b = eax_1
    int32_t i_2
    
    i_2 = eax_1 == 0 ? 3 : 1
    
    int32_t i_1 = i_2
    
    if (i_1 s> 0)
        int32_t esi_1 = 1
        int32_t i
        
        do
            *data_530660
            edx.b = 1
            arg1[esi_1] = sub_4af488(sub_4aed0c+0x28c, edx)
            int32_t ecx_4
            int32_t edx_2
            edx_2, ecx_4 = (*(*arg1[esi_1] + 0x8c))()
            void* eax_4 = arg1[esi_1]
            *(eax_4 + 0x140) = 0x2742
            *(eax_4 + 0x94) = 0x2742
            arg1[esi_1 + 9] = 0
            edx_2.b = 1
            int32_t eax_6
            eax_6, ecx, edx = sub_4030a0(ecx_4, edx_2)
            arg1[esi_1 + 6] = eax_6
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *(arg1 + 0x1b1f6) = 0
    arg1[0x2436].b = 0
    arg1[0x4857].b = 0
    arg1[0x6c78].b = 0
    arg1[0x2437] = 0
    arg1[0x4858] = 0
    arg1[0x6c79] = 0
    edx.b = 1
    int32_t eax_8
    int32_t ecx_5
    int32_t edx_3
    eax_8, ecx_5, edx_3 = sub_4030a0(ecx, edx)
    arg1[0x6c7a] = eax_8
    edx_3.b = 1
    int32_t eax_10
    int32_t ecx_6
    int32_t edx_4
    eax_10, ecx_6, edx_4 = sub_4030a0(ecx_5, edx_3)
    arg1[0x6c7b] = eax_10
    edx_4.b = 1
    arg1[0x6c7c] = sub_4030a0(ecx_6, edx_4)
    arg1[0x6c7e].b = 0
    arg1[0x6c80] = 0
    arg1[0x6c81] = 0
    arg1[0x6c83] = 0
    arg1[0x6c84] = 0
    arg1[0x6c85] = 0
    arg1[0x6c86] = 0
    
    if (var_8:3.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_1
        esp_1 = &esp_1[4]
    
    *esp_1
    esp_1[1]
    esp_1[2]
    esp_1[3]
    esp_1[4]
    return arg1
}
