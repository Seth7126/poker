// ============================================================
// 函数名称: sub_495930
// 虚拟地址: 0x495930
// WARP GUID: 0248d70b-9f34-5484-bc96-d30c730c28d0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: gethostbyname
// [内部子函数调用]: sub_40423c, sub_402d00
// [被调用的父级函数]: sub_4959c0
// ============================================================

int32_t __fastcallsub_495930(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax_2 = gethostbyname(sub_40423c(arg2))
    void* eax_2 = gethostbyname(sub_40423c(arg2))
    int32_t result
    sub_402d00(&result, 4, 0)
    
    if (eax_2 != 0)
        char* edx_1 = **(eax_2 + 0xc)
        result.b = *edx_1
        result:1.b = edx_1[1]
        result:2.b = edx_1[2]
        void* eax_4
        eax_4.b = edx_1[3]
        result:3.b = eax_4.b
    
    return result
}
