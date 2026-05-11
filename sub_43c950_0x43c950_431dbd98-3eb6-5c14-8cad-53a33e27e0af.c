// ============================================================
// 函数名称: sub_43c950
// 虚拟地址: 0x43c950
// WARP GUID: 431dbd98-3eb6-5c14-8cad-53a33e27e0af
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43c92c, sub_43cac8, sub_43b974, sub_43b964
// [被调用的父级函数]: sub_439e08, sub_43e014, sub_43cd94
// ============================================================

void* __convention("regparm")sub_43c950(void* arg1, char arg2)
{
    // 第一条实际指令: char var_18 = 0
    char var_18 = 0
    
    if (arg2 != 0)
    label_43c97e:
        int32_t var_14 = 0
        void* const ebp_1 = nullptr
        int32_t ebx_1 = 0
        int32_t edi_2 = sub_43b964(arg1) - 1
        
        if (edi_2 s>= 0)
            int32_t i_3 = edi_2 + 1
            int32_t i
            
            do
                if (*(sub_43b974(arg1, ebx_1) + 0x32) != 0)
                    if (sub_43c92c(sub_43b974(arg1, ebx_1)) == 0)
                        var_14 = ebx_1
                        break
                    
                    *(sub_43b974(arg1, ebx_1) + 0x32) = 0
                    var_18 = 1
                
                ebx_1 += 1
                i = i_3
                i_3 -= 1
            while (i != 1)
        
        int32_t ebx_2 = var_14
        int32_t edi_5 = sub_43b964(arg1) - 1
        
        if (edi_5 s>= ebx_2)
            int32_t i_4 = edi_5 - ebx_2 + 1
            int32_t i_1
            
            do
                if (sub_43c92c(sub_43b974(arg1, ebx_2)) == 0)
                    if (*(sub_43b974(arg1, ebx_2) + 0x32) != 0)
                        if (ebp_1 != 0)
                            *(ebp_1 + 0x32) = 1
                            var_18 = 1
                        
                        ebp_1 = nullptr
                        var_14 = ebx_2
                else
                    if (ebp_1 != 0)
                        *(ebp_1 + 0x32) = 0
                        var_18 = 1
                    
                    ebp_1 = sub_43b974(arg1, ebx_2)
                
                ebx_2 += 1
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        void* ebx_4 = sub_43b964(arg1) - 1
        
        if (var_14 s<= ebx_4)
            void* i_5 = var_14 - ebx_4 - 1
            void* i_2
            
            do
                if (*(sub_43b974(arg1, ebx_4) + 0x32) != 0)
                    if (sub_43c92c(sub_43b974(arg1, ebx_4)).b == 0)
                        break
                    
                    *(sub_43b974(arg1, ebx_4) + 0x32) = 0
                    var_18 = 1
                
                ebx_4 -= 1
                i_2 = i_5
                i_5 += 1
            while (i_2 != 0xffffffff)
    else if ((*(arg1 + 0x20) & 0x10) == 0 && sub_43cac8(arg1).b != 0)
        goto label_43c97e
    
    arg1.b = var_18
    return arg1
}
