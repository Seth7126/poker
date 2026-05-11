// ============================================================
// 函数名称: sub_43025c
// 虚拟地址: 0x43025c
// WARP GUID: b14a2386-1ddf-55fa-b650-726734d36443
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410524, sub_4301c8
// [被调用的父级函数]: sub_429540, sub_43550c, sub_4347d4
// ============================================================

int32_t __convention("regparm")sub_43025c(void* arg1)
{
    // 第一条实际指令: int32_t result = sub_4301c8(arg1)
    int32_t result = sub_4301c8(arg1)
    
    if (result s> 0)
        int32_t i = result - 1
        
        if (i s>= 0)
            do
                if (*(sub_410524(*(arg1 + 0x140), i) + 0x47) == 0)
                    result -= 1
                
                i -= 1
            while (i != 0xffffffff)
    
    return result
}
