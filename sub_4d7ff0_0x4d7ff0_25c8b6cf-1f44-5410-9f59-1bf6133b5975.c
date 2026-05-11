// ============================================================
// 函数名称: sub_4d7ff0
// 虚拟地址: 0x4d7ff0
// WARP GUID: 25c8b6cf-1f44-5410-9f59-1bf6133b5975
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_476aa0, sub_47a180, sub_47a1c0, sub_476bc0, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_4d7ff0(void* arg1)
{
    // 第一条实际指令: void* eax
    void* eax
    eax.b = *(data_780c58 + 4)
    int32_t var_c
    
    if (eax.b != 1)
        eax.b -= 5
        char temp0_1 = eax.b
        eax.b -= 2
        
        var_c = temp0_1 u>= 2 ? 8 : 4
    else
        var_c = 3
    
    eax.b = data_77e23c
    
    if (eax.b - 1 u< 2)
        var_c = 0
    
    int32_t i = 1
    int32_t* esi = &data_61cc40
    int32_t* edi = &data_61cc60
    void* var_10 = &data_61cc20
    
    do
        sub_47a180(*esi, data_61cabc, arg1, (i s<= var_c).b)
        sub_476aa0(*esi, data_61cabc, arg1, (i s<= var_c).b)
        sub_47a180(*edi, data_61cabc, arg1, (i s<= var_c).b)
        sub_476aa0(*edi, data_61cabc, arg1, (i s<= var_c).b)
        int32_t ecx_5 = *var_10
        
        if (add_overflow(ecx_5, 0xffffffff))
            sub_403010()
            noreturn
        
        sub_47a180(ecx_5 - 1, data_61cabc, arg1, (i s<= var_c).b)
        sub_47a180(*var_10, data_61cabc, arg1, (i s<= var_c).b)
        i += 1
        var_10 += 4
        edi = &edi[1]
        esi = &esi[1]
    while (i != 9)
    
    sub_47a1c0(data_61cc40, data_61cabc, arg1, 0)
    sub_476bc0(data_61cc40, data_61cabc, arg1, 0)
    sub_47a1c0(data_61cc60, data_61cabc, arg1, 0)
    return sub_476bc0(data_61cc60, data_61cabc, arg1, 0)
}
