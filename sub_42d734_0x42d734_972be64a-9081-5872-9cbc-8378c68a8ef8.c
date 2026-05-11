// ============================================================
// 函数名称: sub_42d734
// 虚拟地址: 0x42d734
// WARP GUID: 972be64a-9081-5872-9cbc-8378c68a8ef8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: PtInRect
// [内部子函数调用]: sub_4032ac, sub_42b348, sub_42b31c, sub_42b2f0, sub_40fa94, sub_407800
// [被调用的父级函数]: sub_4328bc
// ============================================================

void __convention("regparm")sub_42d734(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    
    if (*(arg2 + 0xc) != 0 || (esi[8].b & 0x10) != 0)
        return 
    
    int32_t var_38
    sub_407800(*(arg2 + 8), &var_38)
    int32_t var_30
    
    if (var_38 s>= 0)
        sub_42b31c(esi, &var_38, &var_30)
        int32_t var_2c
        (*(*esi + 0x40))(var_30, var_2c)
        RECT lprc
        
        if (PtInRect(&lprc) != 0)
            goto label_42d7af
        
        (*(*esi - 0x10))()
        return 
    
    var_30 = var_38
    int32_t var_34
    int32_t var_2c_1 = var_34
    label_42d7af:
    char var_28 = 0
    int32_t ebx
    ebx.w = 0xffe8
    sub_4032ac(esi, &var_30, &var_28)
    arg1.b = var_28
    *(arg2 + 0xc) = arg1
    
    if (var_28 != 0)
        return 
    
    ebx.w = 0xffdb
    arg1 = sub_4032ac(esi)
    
    if (arg1 != 0 && *(arg1 + 0x51) != 0)
        sub_42b348(esi, 0)
        arg1[0x15] = esi
        
        if (var_38 s< 0)
            void var_14
            sub_40fa94(0, 0, &var_14)
            sub_42b2f0(esi, &var_14, &var_38)
        
        (*(*arg1 + 0x40))()
        *(arg2 + 0xc) = 1
    
    if (*(arg2 + 0xc) == 0)
        (*(*esi - 0x10))()
}
