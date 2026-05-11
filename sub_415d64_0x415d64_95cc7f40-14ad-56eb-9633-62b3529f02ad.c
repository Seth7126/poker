// ============================================================
// 函数名称: sub_415d64
// 虚拟地址: 0x415d64
// WARP GUID: 95cc7f40-14ad-56eb-9633-62b3529f02ad
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_4030d0, sub_415f38, sub_403430, sub_410af0, sub_410524, sub_415fc8, sub_415f70
// [被调用的父级函数]: sub_439ab4, sub_49755c, sub_437030, sub_416620, sub_42aa4c, sub_4ae128, sub_4480dd, sub_43cb8c, sub_43665c, sub_4470f0, sub_4a3060, sub_4a33f0, sub_4975f4
// ============================================================

int32_t __convention("regparm")sub_415d64(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_10 = ecx
    sub_403430(arg1, arg2)
    var_10.b = arg2.b
    sub_415fc8(arg1)
    void* eax_1 = arg1[5]
    
    if (eax_1 != 0)
        int32_t i = *(eax_1 + 8) - 1
        
        if (i s>= 0)
            do
                int32_t ecx_1
                ecx_1.b = 1
                (*(*sub_410524(arg1[5], i) + 0x10))(var_10)
                
                if (arg1[5] == 0)
                    break
                
                i -= 1
            while (i != 0xffffffff)
        
        sub_4030d0(arg1[5])
        arg1[5] = 0
    
    sub_415f70(arg1)
    int32_t* eax_6 = arg1[1]
    
    if (eax_6 != 0)
        sub_415f38(eax_6, arg1)
    
    int32_t edx_2
    edx_2.b = var_10.b
    edx_2.b &= 0xfc
    int32_t result = sub_410af0(arg1, edx_2)
    
    if (var_10.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
