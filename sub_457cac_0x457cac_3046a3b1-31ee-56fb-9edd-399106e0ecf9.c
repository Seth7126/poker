// ============================================================
// 函数名称: sub_457cac
// 虚拟地址: 0x457cac
// WARP GUID: 3046a3b1-31ee-56fb-9edd-399106e0ecf9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_456eb8, sub_457f28, sub_457104, sub_457dbc, sub_4573a4, sub_4574bc
// ============================================================

int32_t __fastcallsub_457cac(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: int32_t i = arg1
    int32_t i = arg1
    int32_t var_8 = arg2
    char* esi = *arg3
    int32_t var_10 = arg3[1]
    
    for (; i s< 0x19; i += 8)
        if (arg3[2] != 0)
            goto label_457d53
        
        if (var_10 == 0)
            if ((*(*(arg3[5] + 0x14) + 0xc))() == 0)
                return 0
            
            int32_t* eax_4 = *(arg3[5] + 0x14)
            esi = *eax_4
            var_10 = eax_4[1]
        
        var_10 -= 1
        int32_t eax_6
        eax_6.b = *esi
        esi = &esi[1]
        
        if (eax_6 == 0xff)
            int32_t j
            
            do
                if (var_10 == 0)
                    if ((*(*(arg3[5] + 0x14) + 0xc))() == 0)
                        return 0
                    
                    char** eax_9 = *(arg3[5] + 0x14)
                    esi = *eax_9
                    var_10 = eax_9[1]
                
                var_10 -= 1
                j.b = *esi
                esi = &esi[1]
            while (j == 0xff)
            
            if (j != 0)
                arg3[2] = j
            label_457d53:
                
                if (i s>= arg4)
                    break
                
                if (*arg3[6] == 0)
                    int32_t* eax_11 = arg3[5]
                    *(*eax_11 + 0x14) = 0x71
                    (*(*eax_11 + 4))()
                    *arg3[6] = 1
                
                eax_6 = 0
            else
                eax_6 = 0xff
        
        var_8 = eax_6 | var_8 << 8
    
    *arg3 = esi
    arg3[1] = var_10
    arg3[3] = var_8
    arg3[4] = i
    return 1
}
