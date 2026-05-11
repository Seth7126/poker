// ============================================================
// 函数名称: sub_4af488
// 虚拟地址: 0x4af488
// WARP GUID: 4c1a4823-5970-502c-8841-c870b92a151e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ac654, sub_4033d0, sub_4a218c, sub_4a20ac, sub_403428, sub_4b06c0, sub_4b125c, sub_49ca70
// [被调用的父级函数]: sub_5101f8
// ============================================================

int32_t* __convention("regparm")sub_4af488(int32_t* arg1, int32_t arg2)
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
    int32_t* esp_1 = &var_10
    
    if (arg2.b != 0)
        void var_20
        esp_1 = &var_20
        int32_t ecx
        arg1 = sub_4033d0(ecx, arg2)
    
    char ebx_1 = arg2.b
    arg2.b = 1
    arg1[0x41] = sub_49ca70(sub_49c984+0x28, arg2, nullptr)
    sub_4ac654(arg1, 0)
    (*(*arg1 + 0x8c))()
    arg1[0x3a] = 3
    int32_t edx_1
    edx_1.b = 1
    sub_4b06c0(arg1, edx_1.b)
    arg1[0x39].b = 0
    *(arg1 + 0x101) = 4
    arg1[0x3f] = 0xf
    arg1[0x40].b = 0
    arg1[0x3d].b = 1
    edx_1.b = 1
    int32_t* eax_4
    int32_t edx_2
    eax_4, edx_2 = sub_4b125c(sub_4aed0c+0x100, edx_1, arg1)
    arg1[0x42] = eax_4
    edx_2.b = 1
    int32_t* eax_5 = sub_4a20ac(sub_4a130e+0xae, edx_2)
    arg1[0x43] = eax_5
    sub_4a218c(eax_5)
    arg1[0x50] = 0
    
    if (ebx_1 != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_1
        esp_1 = &esp_1[4]
    
    *esp_1
    esp_1[1]
    esp_1[2]
    esp_1[3]
    return arg1
}
