// ============================================================
// 函数名称: sub_42ad90
// 虚拟地址: 0x42ad90
// WARP GUID: 075e88f2-b8e9-5800-94aa-feb6157e0797
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_42abd0
// [被调用的父级函数]: sub_42e4a4, sub_446ebc, sub_446b40
// ============================================================

int32_t __convention("regparm")sub_42ad90(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    int32_t ebx = arg2
    int32_t* esi = arg1
    arg1.b = *(esi + 0x4b)
    
    if (ebx.b != arg1.b)
        var_c.b = arg1.b
        *(esi + 0x4b) = ebx.b
        void* eax
        eax.b = ebx.b
        arg2.b = *(eax + 0x52e748)
        sub_42abd0(esi, arg2.b)
        
        if ((esi[8].b & 1) == 0 && ((esi[8].b & 0x10) == 0 || esi[9] != 0))
            bool c_2 = ebx.b - 3 u< 2
            
            if (var_c.b - 1 u< 2 != c_2)
                ebx.w = 0xffef
                sub_4032ac(esi, c_2)
            else
                bool eax_3 = var_c.b
                
                if (eax_3 == 0)
                    ebx.w = 0xffef
                    sub_4032ac(esi, c_2)
                else if (eax_3 == 5 || ebx.b == 0)
                    ebx.w = 0xffef
                    sub_4032ac(esi, c_2)
                else
                    char temp3_1 = ebx.b
                    ebx.b -= 5
                    
                    if (temp3_1 == 5)
                        ebx.w = 0xffef
                        sub_4032ac(esi, c_2)
                    else
                        esi[0xd]
                        esi[0xc]
                        (*(*esi + 0x7c))(esi[0xe], esi[0xf])
    
    ebx.w = 0xffd5
    return sub_4032ac(esi)
}
