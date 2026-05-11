// ============================================================
// 函数名称: sub_42caec
// 虚拟地址: 0x42caec
// WARP GUID: 061202ec-32ca-5b39-82be-001284b75d25
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __thiscallsub_42caec(int32_t arg1, void* arg2 @ eax, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    var_8:3.b = arg1.b
    
    if (*(arg2 + 0xba) == 0)
        return 
    
    arg1.b = var_8:3.b
    *(arg2 + 0xbc)
    (*(arg2 + 0xb8))(arg3, arg4, arg1)
}
